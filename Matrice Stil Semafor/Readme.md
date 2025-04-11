
Arduino schematic and code explanation

## LED Matrix Projects

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
