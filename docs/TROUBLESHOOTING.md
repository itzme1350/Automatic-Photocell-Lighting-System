# SmartLight Troubleshooting Guide

## Problem 1: All Eight LEDs Stay ON

### Possible Cause
The photocell calibration does not match actual sensor readings.

### Solution
Check the Arduino Serial Monitor.

Example readings:

Dark: 36
Bright: 123

Update the calibration values in SmartLight.ino.

## Problem 2: Photocell Reading Does Not Change

### Possible Causes
- Incorrect breadboard connections
- Missing resistor
- Loose jumper wires
- Incorrect analog pin

### Solution
Check the voltage divider circuit.

Photocell:
5V → LDR → A0 → 10kΩ → GND

## Problem 3: LEDs Do Not Turn ON

### Possible Causes
- Reversed LED polarity
- Missing GND connection
- Incorrect shift register wiring
- Incorrect resistor placement

### Solution
Check the SN74HC595N connections.

Verify:
- VCC connected to 5V
- GND connected
- OE connected to GND
- MR connected to 5V

## Problem 4: Incorrect Number of LEDs

### Possible Cause
Incorrect calibration settings.

### Solution

Change:

const int darkLevel = 36;
const int brightLevel = 123;

Use readings from your actual environment.

## Problem 5: Serial Monitor Shows No Data

### Solution
- Select the correct COM port.
- Select Arduino Mega 2560.
- Set Serial Monitor to 9600 baud.
- Verify the sketch uploaded successfully.
