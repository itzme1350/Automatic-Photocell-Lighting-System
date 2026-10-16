# SmartLight Wiring Guide

## Photocell

| Component | Arduino |
|---|---|
| Photocell leg 1 | 5V |
| Photocell leg 2 | A0 |
| 10kΩ resistor | A0 to GND |

## SN74HC595N Shift Register

| Shift Register Pin | Arduino |
|---|---|
| 16 (VCC) | 5V |
| 8 (GND) | GND |
| 14 (DS) | D12 |
| 12 (ST_CP) | D11 |
| 11 (SH_CP) | D9 |
| 13 (OE) | GND |
| 10 (MR) | 5V |

Pin 9 (Q7') is unused.

## LED Connections

| LED | SN74HC595N Pin |
|---|---|
| LED 1 | 15 |
| LED 2 | 1 |
| LED 3 | 2 |
| LED 4 | 3 |
| LED 5 | 4 |
| LED 6 | 5 |
| LED 7 | 6 |
| LED 8 | 7 |

Each LED is connected through its own 1kΩ resistor.

The LED cathodes connect to GND.

## Decoupling Capacitor

A 0.1µF ceramic capacitor connects between:

- Pin 16 (VCC)
- Pin 8 (GND)

This helps reduce electrical noise.
