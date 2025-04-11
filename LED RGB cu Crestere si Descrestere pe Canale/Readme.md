Arduino schematic and code explanation

Project 2 Versiunea 1

In this code, each color channel is increased in turn and the other color channels are decreased in turn, doing this in all possible combinations:
RGB LED Project

### Overview

This project uses an RGB LED to generate a variety of smooth fading effects. The program cycles through 72 sequences, which are constructed by fading in and then fading out each color channel in every possible permutation.

- **Fade In/Out:** Each color channel (Red, Green, Blue) is gradually increased from 0 to maximum brightness (255) and then decreased back to 0.
- **Sequence Order:** The project runs all possible combinations of the fade orders for each channel, creating a total of 36 unique combinations (each combination uses a fade in followed by a fade out, making 72 sequences).
- **Delay:** There is a pause between the fade in and fade out phases to clearly display the transitions.

### Required Components

- Arduino UNO
- RGB LED (with built-in resistors or using external 220 Ω resistors)
- 3 x 220 Ω resistors (if needed)
- Breadboard and connecting wires

### Connections Summary

- **Pin 11 (Red):** Connect through a 220 Ω resistor to the red lead of the RGB LED.
- **Pin 10 (Green):** Connect through a 220 Ω resistor to the green lead of the RGB LED.
- **Pin 9 (Blue):** Connect through a 220 Ω resistor to the blue lead of the RGB LED.
- **Common Terminal:** Depending on the LED type (common cathode or common anode), connect the common pin to GND (for common cathode) or to 5V (for common anode). Adjust the code logic accordingly.

-(R,B,G) -CRESC> MAX -SCAD> (G,B,R) -(R,B,G) -CRESC> MAX -SCAD> (G,R,B)

-(R,B,G) -CRESC> MAX -SCAD> (B,G,R) -(R,B,G) -CRESC> MAX -SCAD> (B,R,G)

-(R,B,G) -CRESC> MAX -SCAD> (R,B,G) -(R,B,G) -CRESC> MAX -SCAD> (R,G,B)

-(R,G,B) -CRESC> MAX -SCAD> (G,B,R) -(R,G,B) -CRESC> MAX -SCAD> (G,R,B)

-(R,G,B) -CRESC> MAX -SCAD> (B,G,R) -(R,G,B) -CRESC> MAX -SCAD> (B,R,G) 

-(R,G,B) -CRESC> MAX -SCAD> (R,B,G) -(R,G,B) -CRESC> MAX -SCAD> (R,G,B)

-(B,G,R) -CRESC> MAX -SCAD> (G,B,R) -(B,G,R) -CRESC> MAX -SCAD> (G,R,B)

-(B,G,R) -CRESC> MAX -SCAD> (B,G,R) -(B,G,R) -CRESC> MAX -SCAD> (B,R,G) 

-(B,G,R) -CRESC> MAX -SCAD> (R,B,G) -(B,G,R) -CRESC> MAX -SCAD> (R,G,B)

-(B,R,G) -CRESC> MAX -SCAD> (G,B,R) -(B,R,G) -CRESC> MAX -SCAD> (G,R,B)

-(B,R,G) -CRESC> MAX -SCAD> (B,G,R) -(B,R,G) -CRESC> MAX -SCAD> (B,R,G) 

-(B,R,G) -CRESC> MAX -SCAD> (R,B,G) -(B,R,G) -CRESC> MAX -SCAD> (R,G,B)

-(G,R,B) -CRESC> MAX -SCAD> (G,B,R) -(G,R,B) -CRESC> MAX -SCAD> (G,R,B)

-(G,R,B) -CRESC> MAX -SCAD> (B,G,R) -(G,R,B) -CRESC> MAX -SCAD> (B,R,G)

-(G,R,B) -CRESC> MAX -SCAD> (R,B,G) -(G,R,B) -CRESC> MAX -SCAD> (R,G,B)

-(G,B,R) -CRESC> MAX -SCAD> (G,B,R) -(G,B,R) -CRESC> MAX -SCAD> (G,R,B)

-(G,B,R) -CRESC> MAX -SCAD> (B,G,R) -(G,B,R) -CRESC> MAX -SCAD> (B,R,G) 

-(G,B,R) -CRESC> MAX -SCAD> (R,B,G) -(G,B,R) -CRESC> MAX -SCAD> (R,G,B)

Required components:
-RGB LED
-Arduino UNO
-Wire
-Resistors 220(OHM) - on TinkerCAD they are required or in the schematic if the RGB LED is not on a module with its own resistor
-Breadboard
