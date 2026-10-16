# 💡 SmartLight
### Automatic Photocell Lighting System

SmartLight is an Arduino-based automatic lighting system that adjusts the number of LEDs based on surrounding light conditions.

The system uses a photocell (LDR) to measure ambient light and an SN74HC595N shift register to control eight LEDs.

As the environment becomes darker, more LEDs automatically turn on. As the environment becomes brighter, fewer LEDs remain active.

## Features

- Automatic light detection
- Eight individually controlled LEDs
- Real-time brightness monitoring
- Adjustable light sensitivity
- Efficient LED control using a shift register
- No manual switches required

## Components

| Component | Quantity |
|---|---|
| ELEGOO Arduino Mega 2560 | 1 |
| SN74HC595N Shift Register | 1 |
| Photocell (LDR) | 1 |
| LEDs | 8 |
| 1kΩ LED Resistors | 8 |
| 10kΩ Resistor | 1 |
| 0.1µF Ceramic Capacitor | 1 |
| Breadboard | 1 |
| Jumper Wires | As needed |

## Hardware Datasheets

The SmartLight project uses the Texas Instruments
SN74HC595N 8-bit shift register.

### SN74HC595N Shift Register

- Manufacturer: Texas Instruments
- Part Number: SN74HC595N
- Type: 8-bit Serial-In, Parallel-Out Shift Register
- Operating Voltage: 2V–6V
- Package: 16-pin DIP

**Official Datasheet:**

[SN74HC595N Datasheet (Texas Instruments)](https://www.ti.com/lit/ds/symlink/sn74hc595.pdf)

The datasheet provides:
- Pin configurations
- Electrical characteristics
- Timing diagrams
- Functional descriptions
- Recommended operating conditions

## How It Works

The photocell measures ambient light intensity through Arduino analog pin A0.

The Arduino converts the analog reading into the number of LEDs that should be illuminated.

The SN74HC595N shift register receives instructions from the Arduino and controls the LEDs.

### Lighting Behavior

| Environment | LEDs ON |
|---|---|
| Very Bright | 1 |
| Bright | 2 |
| Normal | 4 |
| Dim | 6 |
| Very Dark | 8 |

## Sensor Calibration

The system was calibrated using actual sensor readings.

| Condition | Analog Reading |
|---|---|
| Bright | 123 |
| Dark | 36 |

The Arduino maps these readings to 1–8 LEDs.

## Technologies

- Arduino Mega 2560
- C++
- Analog-to-Digital Conversion (ADC)
- Shift Registers
- Digital Output Control
- Voltage Divider Circuits

## Project Documentation

- [How It Works](docs/HOW_IT_WORKS.md)
- [Wiring Guide](docs/WIRING.md)
- [Troubleshooting](docs/TROUBLESHOOTING.md)

## Future Improvements

- LCD display showing light intensity
- Automatic brightness adjustment using PWM
- Data logging
- Wireless monitoring
- Custom PCB design

## Author

Hpone Myat

Computer Engineering,
University of Maryland, Baltimore County (UMBC)
