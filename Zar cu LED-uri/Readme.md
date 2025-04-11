# Arduino Electronic Dice Project

This repository features a simple electronic dice project implemented using an Arduino UNO and multiple LEDs. The project simulates a classic dice by generating a random number between 1 and 6 and lighting up the corresponding LED pattern to represent the dice face.

---

## Overview

In this project, the Arduino generates a random number (between 1 and 6) to simulate a dice roll. Based on the generated number, specific LEDs are activated to display the standard dot pattern of a dice face. The simulation can be triggered manually by a button press or set to update automatically after a delay.

---

## Required Components

- **Arduino UNO**
- **LEDs:** 6 LEDs are typically used (or 7 LEDs if you need to replicate the traditional dice layout with a center dot for faces 1, 3, and 5)
- **Resistors:** 220 Ω resistors (one for each LED)
- **Breadboard**
- **Jumper Wires**
- *(Optional)* **Push-button:** For triggering the dice roll manually

---

## Circuit Schematic (TinkerCAD)

Refer to the TinkerCAD schematic image for a clear view of the wiring:
- Each LED is connected to a digital pin on the Arduino (for example, pins 2–7).
- The LED’s anode (longer lead) is connected through a 220 Ω resistor to the corresponding Arduino pin.
- The LED’s cathode (shorter lead) is connected to the ground (GND).

---

## How It Works

1. **Initialization:**
   - In the `setup()` function, all pins connected to the LEDs are configured as `OUTPUT`.

2. **Random Number Generation:**
   - In the `loop()` function, a random number between 1 and 6 is generated (commonly using `random(1, 7)`).

3. **Displaying the Result:**
   - Depending on the generated number, the LEDs are turned on in a specific pattern that reflects the face of a dice:
     - **Roll of 1:** Light up the LED representing a single central dot.
     - **Roll of 2:** Light up LEDs positioned on two opposite corners.
     - **Roll of 3, 4, 5, or 6:** Activate the LEDs in the pattern that corresponds to each dice face.
   - Only the LEDs matching the dice result are illuminated while the others remain off.

4. **Triggering a New Roll:**
   - The dice roll may be triggered by a push-button or automatically after a set delay, causing a new random number to be generated and the LED pattern to update accordingly.
