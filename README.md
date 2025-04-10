# Arduino-TinkerCAD

This repository contains two Arduino projects that you can test both on the TinkerCAD platform and with a real Arduino UNO. The projects include:

1. **RGB LED Project**
2. **LED Matrix Projects (with 3 versions of code)**

---

## 1. RGB LED Project

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

---

## 2. LED Matrix Projects

The repository contains three versions of an LED matrix project where multiple LEDs (or LED segments) create different lighting animations.

### Common Components

- Arduino UNO
- 12 LED bulbs (or individual LEDs)
- 4 x 220 Ω resistors
- Breadboard and connecting wires

### Description of Versions

#### 2.1. Version 1

- **Functionality:** LEDs are turned on sequentially until all are lit, then they are turned off sequentially in the same order. This creates a gradual “ramping” effect of lighting up and then shutting down the LEDs.

#### 2.2. Version 2

- **Functionality:** Each LED is turned on gradually while ensuring that only one LED remains lit at any given moment. This produces an effect of a single moving light across the LED array, similar to a running light.

#### 2.3. Version 3

- **Functionality:** All LEDs are turned on simultaneously and then turned off at the same time, repeating this cycle continuously.

### Connections Summary

- The LEDs are connected to the digital pins (for example, pins 10, 11, 12, and the built-in LED on pin 13 of the Arduino).
- Each LED should have a 220 Ω resistor in series for current limiting.
- Ensure proper connection of the LED’s cathode (or anode) to the ground (GND) based on your LED type.

---

## How to Use

1. **Download or Clone the Repository:**  
   Clone this repository or download the desired `.ino` files for the RGB LED project and one of the LED Matrix projects.

2. **Assemble the Hardware:**  
   Set up your circuit on a breadboard according to the connection summaries above. Double-check that all LEDs, resistors, and wires are connected correctly.

3. **Upload the Code:**  
   Click the **Upload** button in Arduino IDE to program your Arduino board.

4. **Observe the Result:**
   - **RGB LED Project:** Watch the RGB LED cycle through the 72 fading sequences.
   - **LED Matrix Projects:** See the different light animations as dictated by the selected version’s code.

---

## Final Notes

- You can adjust the speed of the animations by modifying the delay values in the code.
- When using simulation platforms like TinkerCAD, ensure that the pin assignments and resistor values match those described above.
- Check the polarity of the LEDs and the ratings of the resistors (220 Ω typically) to ensure correct operation.

Happy tinkering and enjoy creating unique lighting effects with your Arduino!

## Future Updates

Stay tuned for more projects! We are continuously working on new and exciting Arduino projects that will be added in the coming days. Keep an eye on this repository for updates!
