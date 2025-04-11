# Arduino Project 4: Light-Sensitive Circuit Designs

This repository contains two versions of an Arduino project that explore how to work with light detection. One version uses a photoresistor (light-dependent resistor) to sense ambient light and adjust the delay dynamically, while the other version operates without the sensor. The projects have been designed and simulated in TinkerCAD, and both circuit schematics are provided.

---

## Overview

These projects demonstrate two different approaches:

1. **Project 4 with Photoresistor**  
   In this version, a photoresistor is included in the circuit to measure ambient light levels. The analog value obtained from the photoresistor is used to determine the delay value in the program. This means that the delay (timing of events) adjusts dynamically based on the ambient light conditions.

2. **Project 4 without Photoresistor**  
   This version omits the photoresistor, and the circuit operates with fixed delay values. It is useful for understanding the basic functionality without sensor input or for testing the circuit before integrating dynamic delay control.

---

## Circuit Schematics

Two TinkerCAD schematics are provided:

- **With Photoresistor:**  
  File: `Schema_ArduinoTinkerCAD-Cu Fotorezistor.png`  
  This schematic shows the Arduino circuit with the photoresistor. The photoresistor is typically arranged in a voltage divider configuration with a fixed resistor so that its analog readings can be used to derive a variable delay value.

- **Without Photoresistor:**  
  File: `Schema_ArduinoTinkerCAD-Fara Fotorezistor.png`  
  This schematic represents the simplified version of the circuit without the sensor, using a fixed delay for controlling the outputs.

---

## Required Components

### For the Project with Photoresistor:
- **Arduino UNO**
- **Photoresistor (LDR)**
- **Fixed resistor** (commonly 10kΩ, used for the voltage divider)
- **LED** (for visual feedback or timing indication)
- **Current-limiting resistor for the LED** (typically 220Ω)
- **Breadboard and jumper wires**

### For the Project without Photoresistor:
- **Arduino UNO**
- **LED**
- **Current-limiting resistor for the LED** (typically 220Ω)
- **Breadboard and jumper wires**

## How It Works

### Project 4 with Photoresistor
- **Sensor Reading & Dynamic Delay:**  
  The Arduino reads the analog value from the photoresistor setup, which varies with the ambient light. This reading is then used to set the delay value dynamically in the program. For example, changes in light intensity will lead to adjustments in the delay period, thereby altering the timing of the circuit’s behavior.
- **Outcome:**  
  This project demonstrates how sensor input (from the photoresistor) can be used to modify the behavior of a circuit in real-time, making it responsive to environmental changes.

### Project 4 without Photoresistor
- **Fixed Parameters:**  
  The circuit operates without sensor feedback, using a constant, predefined delay value to control the output.
- **Simple Output:**  
  The LED or other connected output device is controlled directly by the Arduino using the fixed delay.
- **Outcome:**  
  This version is ideal for understanding basic digital/analog control before incorporating sensor-based dynamic adjustments.

