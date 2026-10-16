**# How SmartLight Works

## Overview

SmartLight automatically controls eight LEDs based on surrounding light intensity.

The system consists of three major stages:

1. Light Detection
2. Arduino Processing
3. LED Control

## 1. Light Detection

A photocell, also called a Light Dependent Resistor (LDR), detects changes in surrounding light.

The photocell is connected to a voltage divider circuit.

As light intensity changes, the photocell's resistance changes.

The Arduino measures the voltage through analog pin A0.

## 2. Analog-to-Digital Conversion

The Arduino Mega 2560 uses a 10-bit analog-to-digital converter.

Analog readings range from 0 to 1023.

The project uses calibrated readings:

- Dark: 36
- Bright: 123

These values determine how many LEDs should illuminate.

## 3. LED Control

The Arduino communicates with the SN74HC595N shift register using three digital pins.

- Data: D12
- Latch: D11
- Clock: D9

The shift register provides eight output signals.

Each output controls one LED.

## 4. Automatic Adjustment

When the environment becomes darker:

- Photocell resistance increases.
- Analog voltage decreases.
- Arduino detects a lower analog reading.
- More LEDs turn on.

When the environment becomes brighter, the opposite occurs.

## 5. Continuous Monitoring

The Arduino checks the light level approximately every 200 milliseconds.

This allows the system to respond automatically to changing lighting conditions.**
