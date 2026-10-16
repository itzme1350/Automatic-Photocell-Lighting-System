/*
  Project: SmartLight
  Description: Automatic Photocell Lighting System

  Hardware:
  - Arduino Mega 2560
  - SN74HC595N
  - Photocell
  - 8 LEDs

  Author: Hpone Myat
*/

const int photocellPin = A0;

// SN74HC595N pins
const int dataPin = 12;
const int latchPin = 11;
const int clockPin = 9;

// Calibrated photocell values
const int darkLevel = 36;
const int brightLevel = 123;

void setup() {

  Serial.begin(9600);

  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);

  Serial.println("SmartLight System Started");
}

void loop() {

  int lightLevel = analogRead(photocellPin);

  // More darkness = more LEDs
  int numLEDs = map(
    lightLevel,
    darkLevel,
    brightLevel,
    8,
    1
  );

  numLEDs = constrain(numLEDs, 1, 8);

  byte ledPattern = 0;

  for (int i = 0; i < numLEDs; i++) {
    ledPattern |= (1 << i);
  }

  digitalWrite(latchPin, LOW);

  shiftOut(
    dataPin,
    clockPin,
    MSBFIRST,
    ledPattern
  );

  digitalWrite(latchPin, HIGH);

  Serial.print("Light Level: ");
  Serial.print(lightLevel);

  Serial.print(" | LEDs ON: ");
  Serial.println(numLEDs);

  delay(200);
}
