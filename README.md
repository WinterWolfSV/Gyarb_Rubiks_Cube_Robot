# General information:

## App download
https://drive.google.com/file/d/1lDpYe297j5u2VejIVKeqJpAaV0GtnWWi/view

## App source
https://github.com/WinterWolfSV/cube_scanner_flutter_app

## This repos link
https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot

## Code used
Somewhere in this github repository

## 3d models
In the 3d folder


# Logbook:

## 29 August 2023
Time spent: ~30 minutes (picking the motors up from some place like 4 kilometers away because Amazon messed up my delivery address) \
The stepper motors and their controllers arrived today.  

<img src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/dd26158b-ce51-48fe-a8c9-dad1f1b6b902" width="400" />


## 30 August 2023

Time spent: ~1,5h

I designed the first prototype for the "hand" rotating the cube today, it worked but as I applied the slightest bit of pressure the lets call them fingers broke off. I believe this can be circumvented in a future version by printing the hand sideways instead of the right way around. The strength should increase, but because of how additive manufacturing works I will need to add support material when printing the fingers sideways. (See picture if the hand and finger talk is confusing). Aside from the issues with the structural integrity, the hand did a good job at rotating the cube. I will have to increase the size of the hole between the fingers because I forgot to add sufficient tolerances to the part resulting in fingers breaking off. The reason I only printed v1 today was because halfway through the print I decided it was time to upgrade my printer to direct drive and started a three-hour print. Smart. Essentially that prevents me from using the printer until about 10 tonight, and therefore I will continue tomorrow. The design changes I will make tomorrow include, adding tolerances, changing the way of connecting the hand to the arm (the arm will be explained another day), attempting a sideways print and experimenting with different rotations of the print for optimal strength. 

<img alt="Hand and finger explanation" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/e1e1aeff-37de-4859-a122-0185bc9e9804" width="400" /> ‎
<img alt="Picture of broken fingers" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9c61523b-5d73-4dbe-8661-3b773a7f1830" width="400" /> ‎


## 31 August 2023
Time spent ~1.5h

Today I made v2 and v3. v2 helped me a lot on the way with some design changes including the spacing between the fingers. Before the fingers would break when inserted onto the cube because the tolerances were too low, so I tested increasing with 0.1 and 0.2mm in diameter. The 0.2mm one worked better, so I decided to go with that spacing for future versions. v3 on the other hand was somewhat of a failure, I attempted printing it sideways to make the fingers stronger (which did in fact work), but my printer isn't the most precise one for all axis, and in addition to that I just made a major change by upgrading the printer to a direct drive setup and I haven't calibrated it since. As you can see in the second picture, the arm is not circular (as it was meant to be) so precision isn't at its best right now. \ What I learnt from v2 is that the spacing works. What I learnt from v3 is that printing sideways boosts stability, it the linkage between the hand and the arm works (I just have to dial the settings in) and that printing sideways adds a lot of extra work because I have to remove the support material resulting in an uneven surface and extra work.  

<img alt="v2 on the cube" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0858f8ce-12af-4235-a4e3-7c53ae80bcbb" width="400" /> ‎
<img alt="v3" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a8bdd90e-1640-489e-b6f5-558aa19d0bb1" width="400" /> ‎

## 16 September 2023
Time spent ~3 hours

Today I have finally started working on the robot again, since I for the past 2 weeks have had a malfunctioning printer as well as a lack of motivation to fix it. What I have done today is a lot of thinking regarding how to assemble the robot in a good way, and my previous idea was (as demonstrated in the first embarrassingly bad drawing), to have the cube be sitting in the middle parallel to the surface below. This would need the motors to be fastened in the middle of each side of the frame. The new idea could move at least 4 of the motors to corners, resulting in more structural integrity for the frame. I also printed some corner inserts for the frame where I can put some old wood I have lying around in the shape of a somewhat square, with the limitations that bent wood come with. Depending on which design I end up going with I might not need all 8 of these corner inserts, but as a start I was thinking I would build the outer frame with them. Additionally, I printed an insert for the motor that connects the cube and the motor to 
each other as seen in the first image.  

<img alt="Motor connected to the cube" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/5ff8c318-85a9-459e-9a55-816304153933" width="400" /> ‎
<img alt="" src="" width="400" /> ‎
<img alt="" src="" width="400" /> ‎
<img alt="" src="" width="400" /> ‎
<img alt="" src="" width="400" /> ‎

<img alt="Corner inserts" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/1f128411-b319-4f5f-ab05-a1e19b887b8d" width="400" /> ‎
<img alt="Old idea" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9440a903-bf55-454a-b830-b531b43d79da" width="400" /> ‎
<img alt="New idea" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/83a5b55a-135b-4f65-a295-8ddf1c1a1693" width="400" /> ‎

## 17 September 2023
Time spent ~1 hour

Today I assembled the frame and decided to revert back to my original idea with the motors on the sides, because what I didn't think about last night was that the corners have 4 opposite sides, but the cube has 6 opposite sides. This just makes the entire process harder, and at least for v1 I will keep it easy. That said, I might consider other shapes in future versions. After taking the picture I put some harder plastics on the side to allow for the motors to be attached to it, but it ended up not being structurally sound enough. My plan is to either print some plates to put on the sides, or use alternatives that don't require my printer to print for 12 hours. 

<img alt="IMG20230917150637" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/f270f309-9594-4746-895a-3cfe06216365" width="400" /> ‎

## 21 September 2023
Time spent ~1 hour

I researched which screws I should buy to connect the motors to the frame, and ended up buying [this](https://www.amazon.se/dp/B08T92LSCM?psc=1&ref=ppx_yo2ov_dt_b_product_details) set of 320 screws in various sizes. The screws I need are m3, but while looking at the alternatives, this seemed like the best deal, and it includes enough m3 screws for this project.  

## 28 September 2023
Time spent ~2 hours

Today I designed and printed v1 of the bracket for the motors. It was a success in that the holes matched up and I had a good idea of how to connect the motors to the frame, but it really wasn't structurally sound enough for my liking. For future versions I will add more support and make the plastic thicker to account for the weight it has to cary.  
<img alt="V1" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d2b16195-79ef-4112-8771-712481b41703" width="400" /> ‎

## 2 October 2023
Time spent ~ 30 minutes

The screws I ordered arrived today.\
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/3bbfa070-8581-4241-ba14-e4de4bf8dbe6" width="400" /> ‎

## 07 October 2023
Time spent ~ 7 hours

Today I designed and printed v2 and v3 of the "motor holding brackets", the plastic pieces I use to connect the motors to the frame. v2 was a complete redesign of the previous version, firstly because I forgot to save it when closing it last time, and secondly because v1 had some serious issues.\
Things v2 changed:
- Made the plastic piece be 5mm thick in comparison to 1-2mm.  
- Changed hole size for outer screws to 3mm
- Made design look better
- Removed plastic in between "support bars" \
<img alt="V2" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d38fd153-d5b1-4d35-b94c-696327d1827f" width="400" /> ‎

Things v3 changed:
- Shrunk it a tiny little bit because v2 had the holes outside the frame

<img alt="rn_image_picker_lib_temp_63d1bec7-d2c1-4f49-83f0-a2f5360712a9" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/16baa8c6-66db-448c-af55-ae4f4e2eb54d" width="400" /> ‎

After designing v3 I decided to start printing some more copies of if, and half an hour in I decided to go check on the print, but I was sadly greeted with a spaghetti monster (A term used to describe a failed print and where the result looks like in the picture below). This took a good half an hour to clean up. \
<img alt="spaghetti_monster.png" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0e00ff17-89b9-4556-85c4-27bd5be7f0f2" width="400" /> ‎

Attempt two was successful! \
<img alt="IMG20231007191150" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/e7e2bdd6-8bde-4202-a689-1fb1f50598dc" width="400" /> ‎

I learnt about how to get the steppers to function. What I realised, is that I only need two pins per driver, which is a total of 10 pins for all the motors. This means that I would be able to use a raspberry pi pico instead of an arduino, to both add Wi-Fi to the build and in case of an accident it is cheaper to replace a pi pico than an arduino.  
<img alt="IMG20231007232241" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/10e971b2-4ffd-4581-929a-97924046642c" width="400" /> ‎

## 8 October 2023
Time spent ~ 6 hours

Today I spent a bunch of time working on the electronics of the robot. I started with creating my own jumper wires since I didn't have any lying around. I did this by cutting some cables I took from a computer, and attaching pins to them on both ends. I made 20 of them. Afterward I wired everything up on a breadboard where I put all the stepper drivers and connected them, so I can control them from my arduino. The current setup requires two cables per controller as well as 3 wires for the step resolution and one wire for disable. I can also connect the ground and 5v pins to the arduino and the motor driver board if I want them to all run of a single power supply. Additionally, I wrote some code to be able to control the motors sequentially, and verified that all the motors and controllers worked as they should. For the future I want to add disable wires (wires to turn motors off) to each and every driver, something that both saves energy and also cuts down a bunch on the noise since only one motor is running at a time.  

<img alt="IMG20231008110311" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/7d358dd7-be7d-4cb4-bfff-da5b3ac019cc" width="400" /> ‎
<img alt="7c198e07-fe6d-41b1-ba26-e7d25685b0f5" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/982c1b61-25aa-4201-b0cd-51262fe03b1b" width="400" /> ‎

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/b888f440-e0be-423b-814d-5e9354d63a23

## 14/15 October 2023
Time spent ~ 5 hours

Over the course of this weekend, I created a mockup of the machine in wokwi where I could emulate the arduino and run code on it. But because I forgot to save, a few hours of work went undone after the battery in my laptop died. That said, I know my idea, and it's code should in theory work now. I'll have to fix my code and apply it to the actual robot soon.  
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/123de1f3-c9d4-4449-8bf2-fa18fc154895" width="400" /> ‎

## 28 October 2023
Time spent ~ 3 hours

Today I finished the design of the cube arms and assembled them onto the robot. The cube is now held in place and connected directly to the motors. One of the "hands" had its fingers break of, so I printed new ones at 215 degrees Celsius instead of 210, and they came out a lot stronger (it seems at least). I need to get another motor for the 6th side, but for now, I'll have to modify the algorithm to only use 5 sides of the cube instead of 6. The next time I sit down with the cube solver, I will add all the electronics and hook everything up and start writing some code to make it solve the cube.  
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0ab07002-c06d-4756-ad3c-c75fd5039356" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/98c386b1-4c59-4dff-acda-09e27a6d0ea4" width="400" /> ‎

## 5 November 2023
Time spent ~ 4 hours

Today I attempted to write some code to quote "solve the cube". Well, that didn't go as planned. I got some code up and running that lets me use cube notations to control the motor movements, but there were some issues. These issues were as one can see in the video, that the motors aren't always able to turn, and they just make an unpleasant sound without rotating the cube. I believe it has something to do with the stepper drivers (a4988) still powering the other motors, holding them in place at a wrong angle, blocking movements from the motor I am trying to turn. Two solutions I can see to this problem are:
- Using another driver like the tmc2208 which might disable the steppers faster.  
- Lowering the rotation speed and increasing the torque.  
Another issue I ran into is that the library I was going to use to solve the cube is using an old version of python and is incompatible with the version I am running. One may think that the solution is easy, just downgrade to a previous version of python then. Unfortunately that isn't possible because the library I am using to communicate with the arduino is for a newer version of python. Regardless, this is a problem for another day.  

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a9712651-102b-445a-ad5f-1fee31fa6e93

## 14 November 2023
Time spent ~ 2 hours

Today is another day. I decided to ignore the problems from last time, and move on to another part that also needs doing. Essentially I have another stepper motor from an old printer I took apart, but I am missing a driver for it. My previous plan was to build my own driver with a ti-uln2003a ic, but upon further research I realized that I could only make a driver for a unipolar stepper motor, but I have a bipolar one from the printer. This means I have to purchase another stepper driver for this project. I decided to just solder on some pins to the motor to verify that it does indeed work. I hooked it up to my breadboard and tried it out. At first, it didn't seem to work, but after lowering the speed to 100rpm, I got it turning. I need to order a stepper driver, although I am not sure if I should go with a4988 drivers again or if I should pay twice the amount and buy the tmc2208 ones.  
<img alt="IMG20231118162649" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/67c175ac-b622-468c-8407-97a429b1bacb" width="400" /> ‎


## 25 November 2023
Time spent ~ 2 hours

Today I worked on the connections for the printer motor, and I modified the design to fit it. My first attempt at printing it resulted in a spaghetti monster (again), but the second attempt turned out okay. In some absurd way, the first version actually worked just as I wanted it, so there won't be a v2.  
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/25be4178-8dd2-49d3-8139-2107644ef001" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/30e77747-e519-45ac-be45-09f1b815aeb1" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/3830d8a3-39b4-4ff5-8934-b8d5c7de48e8" width="400" /> ‎


## 9 December 2023
Time spent ~ 3 hours

Today I ran into the first major hiccup in this project. It started with me receiving the tmc2208 drivers I ordered from amazon. I had heard that they would be a drop in place replacement for the a4988 I have previously used, but this proved to not be the case. After about 2 hours of debugging and taking a multi-hour break to think about something else, I realized that the two of the drivers I received were defective. This means that I still have three working tmc2208 drivers and can use them for the project, but to replace the broken ones I will have to use the a9488 drivers I have from before. This is generally still a positive outcome as I now have 6 < drivers and can have one motor per side, whereas previously I was limited to just 5. Additionally one of the problems I've had was that the motor is still powered for about a second after getting the signal to turn off, and this has resulted in the robot locking up while attempting to solve it with higher speeds. The new drivers turn off instantly as soon as the enable pin is set to high, and this should hopefully allow me to run the robot at somewhat higher speeds than what I was previously able to, but mainly just a lot more reliably.\
Regarding what I did today, I hooked one of the working drivers up to the arduino and ~~wrote~~ stole some basic code that makes the motor turn for an arbitrary number of steps. Steps. Steps bring me to the next problem I have with this driver. I genuinely don't know what the steps mean in the context of this driver, as on the product description for the motor, it says that 200 steps is one full rotation, but I need to set the steps variable to 1600 to get about one full rotation, but it isn't exactly one full rotation either, and the distance varies. I am hoping this can be accounted for in code. As 1600/200 is 8, it could be that to rotate one step, the driver needs 8 micro-steps, but this is also weird as I've understood it as if the tmc2208 generates a 128 or 256 step sin-wave. Actually, looking at 256, that is 2^8 which could explain the steps*8 formula. Either way, this is a rather small problem and I think working around it shouldn't be too hard. \

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9dd510fd-df49-4be2-b0ba-65b2ae07234a


## 10 December 2023
Time spent ~ 3 hours

Today I hooked all the new drivers up to the arduino and configured the code to work with the new setup. I also made new jumper wires (first photo) since I was running out of them.\
Some issues I ran into:
- I forgot to hook up the micro stepping control for the a9488 drivers, but I realized this after a few minutes and hooking them up resolved the issue.  
- The cube was somewhat abused (second picture) as I was playing around with the motors and this resulted in some of the hands that hold the cube breaking and falling out. I have plans on revisiting the design for the connection between the motors and the cube in a future revision.  
- As I was feeling pretty done for the day, I decided to just test all the drivers and their configurations again before wrapping up. As I was doing this, the second driver just stopped working and I tried troubleshooting my connections. I couldn't pinpoint the issue and was afraid that the driver had stopped working. I switched it out for another driver and it started working. Then I tried switching it back to the old driver, and that didn't work. On top of that the third driver also stopped working which was very confusing as I hadn't to my knowledge done anything that would kill it (i.e. no high voltages, no bad connections etc.). I wanted to just verify the state of the drivers for a third time, and lo and behold, all the drivers just worked. I suppose it is another case where electronics just need to be rebooted sometimes.  
Things I will do in the future:
- Build a better looking (and square) frame for the robot.  
- Revisit the design for the cube holding arms.  

<img alt="IMG20231209183227" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/f4369732-3c46-4f83-89bd-a6e8892d3d2f" width="400" /> ‎
<img alt="IMG20231210135948" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/6e2e3a5c-6562-4962-8862-2669723b8302" width="400" /> ‎
<img alt="IMG20231210143127" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/eb7a7b13-5574-4a39-b34e-b68e915e4518" width="400" /> ‎

# 23 - 31 December 2023
Time spent ~ 15 hours

Over the last couple of days I have been working on getting version two of the frame designed and built. I have also upgraded my printer to use klipper firmware instead of marlin, meaning that I have a bunch of new features like camera monitoring, input shaping and pressure advance. I can also monitor and print wirelessly from my room now. Back to version two of the robot. I have designed the bottom motor holder for the frame and have also gotten the base shape for the sides in place. This is a process that has taken multiple iterations as well as many hours to design and print. Some of the more final shapes will be attached below.  
What I am changing for version 2 are a bunch of things, but the main features are that one will be able to take the cube out with ease and put it in afterward. I am also making it significantly smaller as well as making it a lot more visually pleasing. Previously, the frame was constructed of multiple repurposed wooden "beams", but this new version will be built purely from pla (the plastic I am printing with), metal rods that I stole from an old printer and a bunch of screws. I am also planning on making a simple app or program to scan the cube and process the required moves, but I want a fully working robot before I start development of this.  

<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d52ea68a-af8a-4736-9864-04e0c90d7996" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/56995281-5695-4473-a12f-61f36c4cb450" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/32b1543d-49e9-4505-a469-be0531f9f9f0" width="400" /> ‎

# 1 January 2024
Time spent ~ 7 hours

I completed the frame for the robot today, meaning that all the motors have somewhere to sit and attach to the cube. The parts that the frame are built from are the following three. 1x bottom motor holder, 1x top motor holder and 4x side motor holders. These will all be attached below. I also went through 10+ prototypes to get all of this working correctly. One thing that didn't work out the way I expected it to in the end was the connection between the side mounts and the top mount for the motors. In an ideal world there would be a 3.5mm hole lining up for me to put a screw through, essentially anchoring everything together, but in reality they don't align and I don't have enough plastic to drill a new hole. This is fine though since the tolerances of the top mount are so perfect that it just sits there without the need for an anchoring point like a screw. I didn't run into any major issues today related to the robot, but my printer needed some maintenance to function properly. All in all, not a big deal and it went fairly smooth. Tomorrow I will either work on the app to scan the cube, or on the wiring of the robot, although it shouldn't have changed since v1. I just had an idea as well. Since I am already building an app for this robot, I might as well just process everything on the phone and then send the moves to the robot over bluetooth. This will most likely be a pain to implement, but that is for future me to deal with. Regardless it would be cool, so I think I am going to do it.  

<img alt="bottom" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/35a085d0-5b7d-4c5a-a4b8-1ce07d9a2d14" width="400" /> ‎
<img alt="top" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/296fece0-0908-4c80-bbb1-5ad060807bd6" width="400" /> ‎
<img alt="side" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/928fdd18-3b21-477c-91a8-74b3323aad7b" width="400" /> ‎
<img alt="full" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/b2cac423-f7a8-40b6-872c-30db36fe3961" width="400" /> ‎
<img alt="prototypes" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/4d6be7fd-55f0-4d9d-bfe0-ccac54b14eab" width="400" /> ‎


# 2 January 2024
Time spent ~ 4 hours

Today I started the development of the app and I got some basic features working. The first thing I did was to get the camera library working and I can now take pictures and display them. It's not very impressive yet, but I will soon scan the different sides of the cube and use a library 
called [cuber](https://pub.dev/packages/cuber) to solve the cube for me. I'm not aiming for perfect, but rather fully working and good enough for this app.  
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/fc233030-7d79-47b9-b3c1-246bdbf3b153 =100x100" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/8913e17b-a4d9-4c1e-8a17-ddb1c7f3ac6b" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/ae83eec7-032e-47b3-8768-0a72bcb5b173" width="400" /> ‎

# 3-5 January 2024
Time spent ~ 7 hours

Over the past couple days I have been working on the app, I haven't had the motivation to document my process, but today I felt it was time since I had a fairly major breakthrough. Today I got all the cube scanning, editing and solving done. In the current app you scan all 6 sides on the cube, and then you come to a screen where you can edit it in case the colors were picked up wrong given the current lighting, or if one side was gravely misaligned. Then a solution is generated for the current cube layout if it is valid, and if not, an error message is returned to the user of the app. 
My next steps will be to give the app a nicer layout and round some scuffed edges. For example there is one screen in between the two on display, and that screen has been a sort of development screen per se, and has generated (non-interactive) images based on the cube. I tried removing it, however, due to my bad coding and everything depending on each other in the screen, I couldn't just rip out the code I wanted and remove the screen, but I had to leave it in for now. This will obviously be fixed in a future version. I might look into adding bluetooth depending on how much time I want to spend on this before calling it a day. Additionally, I have noticed some issues with the motor drivers, but I will address all the software for the robot at a later point in time, and hopefully get it working then.

<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/2099a885-f692-42fb-ad58-0a306914c219" width="400" /> ‎
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/887241f0-e6f0-4220-93c7-c6f7542169e6" width="400" /> ‎

# 6 January 2024
Time spent ~ 2 hours

Today I toyed around with bluetooth on my pi pico. I got it working that I can send data from my phone to the pico over bluetooth low energy. The next step will be to send that data to my arduino over serial.

# 7 January 2024
Time spent ~ 2 hours

I just had such a major breakthrough. I managed to get serial communication working from my pi pico to my arduino. It was a headache but in the end I realized that due to hardware limitations, the pins I used couldn't be used to receive data. I switched the pin out, and now it works perfectly!  
<img alt="image" src="https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/bb90f936-fe3d-4b91-bc50-3717e5a86074" width="400" />

# 8 January 2024
Time spent ~ 10 hours

Today was a day in which I spent a lot of time on both software and hardware. My day started with me fixing bluetooth in the app. The library I used, [flutter_reactive_ble](https://pub.dev/packages/flutter_reactive_ble) didn't give any good options for how to disconnect from the given bluetooth low energy device it was connected to. After a few hours of writing spaghetti code trying to get it to work (and coming a good part of the way) I decided to simply switch libraries to [flutter_blue_plus](https://pub.dev/packages/flutter_blue_plus) which definitely was the right decision. I wrote an abstraction layer to the plugin which allowed me to easily send data to the connected pi pico w, and from establishing a connection until the data has been transferred it's only about 2-3 seconds top. The main reason I switched libraries was that I couldn't find a good way to terminate the connection from the phone.  
After about 5 hours, getting all the software to work I decided to finish the hardware part (something I thought would be a quick and easy process), but the first thing that greeted me was that I couldn't control one of the motors, and after some investigating it was the tmc2208 driver I had had problems with in the past that had died (shocker). I now only have two tmc2208 left, but luckily I still had two spare a4988 drivers lying around from previously. It required minimal rewiring and it worked. I could now control all 6 motors.  
Or could I? I had some issues with the one stepper I pulled from an old printer and I couldn't control it accurately which resulted in the cube being misaligned while solving it and the cube would get stuck and make a horrible noice. Since I didn't have a spare motor lying around and the entire robot being designed around the form factor of this one stepper, I had no choice but to fix it. I was able to get a successful solve maybe every 4 tries, which was okay as a proof of concept but nowhere close to what I was looking for. I spent probably around 5 hours wrestling with this stepper trying different approaches to get it to work. I tried changing the steps for a 90° and 180° rotation which did work somewhat but just not reliably enough for me to use it. It did also lack any torque so my guess was that somewhat was up with the micro stepping, but this didn't work either. In the end I found the data sheet for the stepper, and it said it was supposed to be driven at 24v, and I was driving it at 12v. So I tested upping the voltage but to no avail. The data sheet also mentioned that the stepper had 48 steps per revelation which actually was the culprit. I had been driving it as if it had 200 steps, resulting in skipping steps, running at way to high speeds, being inaccurate and being unpredictable. Changing this one value ended up fixing it and the robot works (from my somewhat limited testing) flawlessly. A video of the finished result will be attached under this text block.  

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/d3794d3a-4073-471e-90b4-b2abb0396488

https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a6b9c8ca-2c9e-4031-9c8f-62788c9ebddc
