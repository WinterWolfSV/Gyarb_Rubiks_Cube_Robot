# Logbook:

## 29 August 2023
Time spent: ~30 minutes (picking the motors up from some place like 4 kilometers away because Amazon messed up my delivery adress) \
The stepper motors and their controllers arrived today. 
![Image of stepper motors and their drivers.](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0e0ddaeb-55d4-411d-ad93-947bec653ecc)

## 30 August 2023
Time spent: ~1,5h

I designed the first prototype for the "hand" rotating the cube today, it worked but as I applied the slightest bit of pressure the, lets call them fingers broke off. I belive this can be circumvented in a future version by printing the hand sideways instead of the right way around. The strength should increase, but because of how additive manufacturing works I will need to add support material when printing the fingers sideways. (See picture if the hand and finger talk is confusing). Aside from the issues with the structual integrity, the hand did a good job at rotating the cube. I will have to increase the size of the hole between the fingers because I forgot to add sufficient tolerances to the part resulting in fingers breaking off. The reason I only printed v1 today was because halfway through the print I decided it was time to upgrade my printer to direct drive and started a 3 hour print. Smart. Essentially that prevents me from using the printer until about 10 tonight, and therefore I will continue tomorrow. The design changes I will make tomorrow include, adding tolerances, changing the way of connecting the hand to the arm (the arm will be explained another day), attempting a sideways print and experementing with different rotations of the print for optimal strength.

![Hand and finger explanation](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/e1e1aeff-37de-4859-a122-0185bc9e9804)
![Picture of broken fingers](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9c61523b-5d73-4dbe-8661-3b773a7f1830)

## 31 August 2023
Time spent ~1.5h

Today I made v2 and v3. v2 helped me a lot on the way with some design changes including the spacing between the fingers. Before the fingers would break when inserted onto the cube because the tolerances were to low, so I tested increasing with 0.1 and 0.2mm in diameter. The 0.2mm one worked better so I decided to go with that spacing for future versions. v3 on the other hand was somewhat of a failure, I attempted printing it sideways to make the fingers stronger (which did in fact work), but my printer isn't the most precise one for all axies, and in addition to that I just made a major change by upgrading the printer to a direct drive setup and I haven't calibrated it since. As you can see in the second picture, the arm is not circular (as it was meant to be) so precission isn't at its best right now. \ What I learnt from v2 is that the spacing works. What I learnt from v3 is that printing sideways boosts stability, it the linkage between the hand and the arm works (I just have to dial the settings in) and that printing sideways adds a lot of extra work because I have to remove the support material resulting in an uneven surface and extra work.

![v2 on the cube](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0858f8ce-12af-4235-a4e3-7c53ae80bcbb) 
![v3](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a8bdd90e-1640-489e-b6f5-558aa19d0bb1)

## 16 September 2023
Time spent ~3 hours

Today I have finally started working on the robot again, since I for the past 2 weeks have had a malfunctioning printer as well as a lack of motivation to fix it. What I have done today is a lot of thinking regarding how to assemble the robot in a good way, and my previous idea was (as demonstrated in the first embarrassingly bad drawing), to have the cube be sitting in the middle paralel to the surface below. This would need the motors to be fastened in the middle of each side of the frame. The new idea could move at least 4 of the motors to corners, resulting in more structual integrity for the frame. I also printed some corner inserts for the frame where I can put some old wood I have laying around in the shape of a somewhat square, with the limitations that bent wood come with. Depending on which design I end up going with I might not need all 8 of these corner insters, but as a start I was thinking I would build the outer frame with them. Additionally, I printed an insert for the motor that connects the cube and the motor to each other as seen in the first image.

![Motor connected to the cube](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/5ff8c318-85a9-459e-9a55-816304153933)
![Corner inserts](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/1f128411-b319-4f5f-ab05-a1e19b887b8d)
![Old idea](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9440a903-bf55-454a-b830-b531b43d79da)
![New idea](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/83a5b55a-135b-4f65-a295-8ddf1c1a1693)

## 17 September 2023
Time spent ~1 hour

Today I assembled the frame and decided to revert back to my original idea with the motors on the sides, because what I didn't think about last night was that the corners have 4 oposite sides, but the cube has 6 oposite sides. This just makes the entire process harder, and at least for v1 I will keep it easy. That said, I might consider other shapes in future versions. After taking the picture I put some harder plastics on the side to allow for the motots to be attached to it, but it ended up not being structurally sound enough. My plan is to either print some plates to put on the sides, or use alternatives that don't require my printer to print for 12 hours. 

![IMG20230917150637](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/f270f309-9594-4746-895a-3cfe06216365)

## 21 September 2023
Time spent ~1 hour

I researched which screws I should buy to connect the motors to the frame, and ended up buying [this](https://www.amazon.se/dp/B08T92LSCM?psc=1&ref=ppx_yo2ov_dt_b_product_details) set of 320 screws in various sizes. The screws I need are m3, but while loking at the alternatives, this seemed like the best deal and it includes enough m3 screws for this project.

## 28 September 2023
Time spent ~2 hours

Today I designed and printed v1 of the bracket for the motors. It was a success in that the holes matched up and I had a good idea of how to connect the motors to the frame, but it really wasn't structually sound enough for my liking. For future versions I will add more support and make the plastic thicker to account for the weight it has to cary.

![V1](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d2b16195-79ef-4112-8771-712481b41703)

## 2 Oktober 2023
Time spent ~ 30 minutes

The screws I ordered arrived today.\
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/3bbfa070-8581-4241-ba14-e4de4bf8dbe6)

## 07 Oktober 2023
Time spent ~ 7 hours

Today I designed and printed v2 and v3 of the "motor holding brackets", the plastic pieces I use to connect the motors to the frame. v2 was a complete redesign of the previous version, firstly because I forgot to save it when closing it last time, and secondly because v1 had some serious issues.\
Things v2 changed:
- Made the plastic piece be 5mm thick in comparasion to 1-2mm.
- Changed hole size for outer screws to 3mm
- Made design look better
- Removed plastic in between "support bars" \
![V2](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d38fd153-d5b1-4d35-b94c-696327d1827f)

Things v3 changed:
- Shrunk it a tiny little bit because v2 had the holes outside the frame

![rn_image_picker_lib_temp_63d1bec7-d2c1-4f49-83f0-a2f5360712a9](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/16baa8c6-66db-448c-af55-ae4f4e2eb54d)

After designing v3 I decided to start printing some more copies of if, and half an hour in I decided to go check on the print, but I was sadly greeted with a spaghetti monster (A term used to describe a failed print and where the result looks like in the picture below). This took a good half an hour to clean up. \
![spaghetti_monster.png](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0e00ff17-89b9-4556-85c4-27bd5be7f0f2)

Attempt two was successful! \
![IMG20231007191150](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/e7e2bdd6-8bde-4202-a689-1fb1f50598dc)

I learnt about how to get the steppers to function. What I realised, is that I only need two pins per driver, which is a total of 10 pins for all the motors. This means that I would be able to use a raspberry pi pico instead of an arduino, to both add wifi to the build and in case of an accident it is cheaper to replace a pi pico than an arduino.
![IMG20231007232241](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/10e971b2-4ffd-4581-929a-97924046642c)

## 8 Oktober 2023
Time spent ~ 6 hours

Today I spent a buch of time working on the electronics of the robot. I started with creating my own jumper wires since I didn't have any laying around. I did this by cutting some cables I took from a computer, and attaching pins to them on both ends. I made 20 of them. Afterwards I wired everything up on a breadboard where I put all the stepper drivers and connected them so I can control them from my arduino. The current setup requires two cables per controller as well as 3 wires for the step resolution and one wire for disable. I can also connect the ground and 5v pins to the arduino and the motor driver board if I want them to all run of a single power supply. Aditionally I wrote some code to be able to control the motors sequentially, and verified that all the motors and controllers worked as they should. For the future I want to add disable wires (wires to turn motors off) to each and every driver, something that both saves energy and also cuts down a bunch on the noise since only one motor is running at a time.

![IMG20231008110311](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/7d358dd7-be7d-4cb4-bfff-da5b3ac019cc)
![7c198e07-fe6d-41b1-ba26-e7d25685b0f5](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/982c1b61-25aa-4201-b0cd-51262fe03b1b)

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/b888f440-e0be-423b-814d-5e9354d63a23

## 14/15 Oktober 2023
Time spent ~ 5 hours

Over the course of this weekend, I created a mockup of the machine in wokwi where I could emulate the arduino and run code on it. But because I forgot to save, a few hours of work went undone after the battery in my laptop died. That said, I know my idea and it's code should in theory work now. I'll have to fix my code and apply it to the actual robot soon.
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/123de1f3-c9d4-4449-8bf2-fa18fc154895)

## 28 Oktober 2023
Time spent ~ 3 hours

Today I finished the design of the cube arms and assembled them onto the robot. The cube is now held in place and connected directly to the motors. One of the "hands" had its fingers break of, so I printed new ones at 215 degrees celcius instead of 210, and they came out a lot stronger (it seems at least). I need to get another motor for the 6th side, but for now, I'll have to modify the algorithm to only use 5 sides of the cube instead of 6. The next time I sit down with the cube solver, I will add all the electronics and hook everything up and start writing some code to make it solve the cube. 
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0ab07002-c06d-4756-ad3c-c75fd5039356)
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/98c386b1-4c59-4dff-acda-09e27a6d0ea4)

## 5 November 2023
Time spent ~ 4 hours

Today I attempted to write some code to quote "solve the cube". Well, that didn't go as planned. I got some code up and running that lets me use cube notations to control the motor movements, but there were some issues. These issues were as one can see in the video, that the motors aren't always able to turn and they just make an unpleasant sound without rotating the cube. I believe it has something to do with the stepper drivers (a4988) still powering the other motors, holding them in place at a wrong angle, blocking movements from the motor I am trying to turn. Two solutions I can see to this problem are:
- Using another driver like the tmc2208 which might disable the steppers faster.
- Lowering the rotation speed and increasing the torque.
Another issue I ran into is that the library I was going to use to solve the cube is ussing an old version of python and is incompatible with the version I am running. One may think that the solution is easy, just downgrade to a previous version of python then. Unfortunately that isn't possible because the library I am using to communicate with the arduino is for a newer version of python. Regardless, this is a problem for another day.

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a9712651-102b-445a-ad5f-1fee31fa6e93

## 14 November 2023
Time spent ~ 2 hours

Today is another day. I decided to ignore the problems from last time, and move on to another part that also needs doing. Essentially I have another stepper motor from an old printer I took apart, but I am missing a driver for it. My previous plan was to build my own driver with a ti-uln2003a ic, but upon further research I realized that I could only make a driver for an unipolar stepper motor, but I have a bipolar one from the printer. This means I have to purchase another stepper driver for this project. I decided to just solder on some pins to the motor to verify that it does indeed work. I hooked it up to my breadboard and tried it out. At first it didn't seem to work, but after lowering the speed to 100rpm, I got it turning. I need to order a stepper driver, allthough I am not sure if I should go with a4988 drivers again or if I should pay twice the amount and buy the tmc2208 ones.
![IMG20231118162649](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/67c175ac-b622-468c-8407-97a429b1bacb)


## 25 November 2023
Time spent ~ 2 hours

Today I worked on the connections for the printer motor, and I modified the design to fit it. My first attempt at printing it resulted in a spagetthi monster (again), but the second attmpt turned out okay. In some absurd way, the first version actually worked just as I wanted it, so there won't be a v2.
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/25be4178-8dd2-49d3-8139-2107644ef001)
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/30e77747-e519-45ac-be45-09f1b815aeb1)
![image](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/3830d8a3-39b4-4ff5-8934-b8d5c7de48e8)
