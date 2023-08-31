# Logbook:

## 29 August 2023
Time spent: ~30 minutes (picking the motors up from some place like 4 kilometers away because Amazon messed up my delivery adress) \
The stepper motors and their controllers arrived today. ![Image of stepper motors and their drivers.](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0e0ddaeb-55d4-411d-ad93-947bec653ecc)

## 30 August 2023
Time spent: ~1,5h

I designed the first prototype for the "hand" rotating the cube today, it worked but as I applied the slightest bit of pressure the, lets call them fingers broke off. I belive this can be circumvented in a future version by printing the hand sideways instead of the right way around. The strength should increase, but because of how additive manufacturing works I will need to add support material when printing the fingers sideways. (See picture if the hand and finger talk is confusing). Aside from the issues with the structual integrity, the hand did a good job at rotating the cube. I will have to increase the size of the hole between the fingers because I forgot to add sufficient tolerances to the part resulting in fingers breaking off. The reason I only printed v1 today was because halfway through the print I decided it was time to upgrade my printer to direct drive and started a 3 hour print. Smart. Essentially that prevents me from using the printer until about 10 tonight, and therefore I will continue tomorrow. The design changes I will make tomorrow include, adding tolerances, changing the way of connecting the hand to the arm (the arm will be explained another day), attempting a sideways print and experementing with different rotations of the print for optimal strength. \
![Hand and finger explanation](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/e1e1aeff-37de-4859-a122-0185bc9e9804)
![Picture of broken fingers](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/9c61523b-5d73-4dbe-8661-3b773a7f1830)

## 31 August 2023
Time spent ~1.5h

Today I made v2 and v3. v2 helped me a lot on the way with some design changes including the spacing between the fingers. Before the fingers would break when inserted onto the cube because the tolerances were to low, so I tested increasing with 0.1 and 0.2mm in diameter. The 0.2mm one worked better so I decided to go with that spacing for future versions. v3 on the other hand was somewhat of a failure, I attempted printing it sideways to make the fingers stronger (which did in fact work), but my printer isn't the most precise one for all axies, and in addition to that I just made a major change by upgrading the printer to a direct drive setup and I haven't calibrated it since. As you can see in the second picture, the arm is not circular (as it was meant to be) so precission isn't at its best right now. \ What I learnt from v2 is that the spacing works. What I learnt from v3 is that printing sideways boosts stability, it the linkage between the hand and the arm works (I just have to dial the settings in) and that printing sideways adds a lot of extra work because I have to remove the support material resulting in an uneven surface and extra work. ![v2 on the cube](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/0858f8ce-12af-4235-a4e3-7c53ae80bcbb) ![v3](https://github.com/WinterWolfSV/Gyarb_Rubiks_Cube_Robot/assets/61477891/a8bdd90e-1640-489e-b6f5-558aa19d0bb1)

