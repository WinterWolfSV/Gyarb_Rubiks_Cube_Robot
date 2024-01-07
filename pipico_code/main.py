import machine
import utime

# Define UART pins
uart_tx_pin = machine.Pin(12)
uart_rx_pin = machine.Pin(13)

# Create UART object
uart = machine.UART(0, 9600, tx=uart_tx_pin, rx=uart_rx_pin)

# Main loop for sending and receiving data
while True:
    # Send data
    uart.write("Hello from Raspberry Pi Pico W!\n")
    utime.sleep(1)

    # Receive data
    if uart.any():
        received_data = uart.read()
        print("Received:", received_data)

    utime.sleep(1)


