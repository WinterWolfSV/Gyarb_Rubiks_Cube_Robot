import ubluetooth
import time
import machine
from ble_advertising import advertising_payload
from micropython import const

# Custom service UUID and characteristics
_CUSTOM_SERVICE_UUID = ubluetooth.UUID("0000FE07-0000-1000-8000-00805F9B34FC")
_CUSTOM_CHAR_UUID = ubluetooth.UUID("00002A05-0000-1000-8000-00805F9B34FB")

_IRQ_GATTS_CONNECT = const(1)
_IRQ_GATTS_DISCONNECT = const(2)
_IRQ_GATTS_WRITE = const(3)
_IRQ_GATTS_EXEC_WRITE = const(4)

# Flags for characteristics
_FLAG_WRITE = const(0x0008)

_CUSTOM_CHAR = (
    _CUSTOM_CHAR_UUID,
    _FLAG_WRITE,
)

_CUSTOM_SERVICE = (
    _CUSTOM_SERVICE_UUID,
    (_CUSTOM_CHAR,),
)

# Define UART pins
uart_tx_pin = machine.Pin(12)
uart_rx_pin = machine.Pin(13)

# Create UART object
uart = machine.UART(0, 9600, tx=uart_tx_pin, rx=uart_rx_pin)


class CustomBLEPeripheral:
    def __init__(self, ble, name="cube"):
        self._ble = ble
        self._ble.active(True)
        self._ble.irq(self._irq)
        ((self._handle_char,),) = self._ble.gatts_register_services((_CUSTOM_SERVICE,))
        self._connections = set()
        self._write_callback = None
        self._payload = advertising_payload(name=name, services=[_CUSTOM_SERVICE_UUID])
        self._advertise()

    def _irq(self, event, data):
        if event == _IRQ_GATTS_CONNECT:
            conn_handle, _, _ = data
            print("New connection", conn_handle)
            self._connections.add(conn_handle)
        elif event == _IRQ_GATTS_DISCONNECT:
            conn_handle, _, _ = data
            print("Disconnected", conn_handle)
            self._connections.remove(conn_handle)
            self._advertise()
        elif event == _IRQ_GATTS_WRITE:
            conn_handle, value_handle = data
            value = self._ble.gatts_read(value_handle)
            if value_handle == self._handle_char and self._write_callback:
                self._write_callback(conn_handle, value)

    def send_notification(self, conn_handle, data):
        self._ble.gatts_notify(conn_handle, self._handle_char, data)

    def is_connected(self):
        return len(self._connections) > 0

    def _advertise(self, interval_us=50000):
        print("Starting advertising")
        self._ble.gap_advertise(interval_us, adv_data=self._payload)

    def on_write(self, callback):
        self._write_callback = callback
        for conn_handle in self._connections:
            print("Sending notification")
            self._ble.gap_disconnect(conn_handle)

    @property
    def connections(self):
        return self._connections

    @property
    def ble(self):
        return self._ble


full_data = ""

def custom_demo():
    led_onboard = machine.Pin("LED", machine.Pin.OUT)
    ble = ubluetooth.BLE()
    custom_ble = CustomBLEPeripheral(ble)

    def on_write(conn_handle, value):
        global full_data
        if value.decode("utf-8") == "|":
            sendToSerial(full_data.strip())
            print("Clearing data")
            full_data = ""
            return
        full_data += value.decode("utf-8") + " "

        data = value.decode("utf-8")
        print("Received:", data)

    custom_ble.on_write(on_write)

    max_connection_time = 1000
    current_time = 0
    while True:
        if custom_ble.is_connected():
            current_time += 1
            led_onboard.value(1)
        else:
            current_time = 0
            led_onboard.value(0)

        if current_time > max_connection_time:
            print("Disconnecting due to timeout")
            for conn_handle in custom_ble.connections:
                custom_ble.ble.gap_disconnect(conn_handle)
        time.sleep(0.01)


def sendToSerial(data):
    print("Sending data to serial:", data)
    uart.write(data)


if __name__ == "__main__":
    custom_demo()
