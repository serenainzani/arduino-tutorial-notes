int readPin = A3;
int redLedPin = 9;
float prevVoltageOut;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  Serial.begin(9600);
}

/**
  * Scales the analogRead value to the given range, using the max value for said range
  * 5. -> 5v input, dot allows for the returning of a float
  * maxValue -> The max value for a function. 1023 for analogRead; 255 for analogWrite. 
  */
float scaleAnalogValueToRange(int analogReadVal, int maxValue) {
  return 5./maxValue * analogReadVal;
}

void loop() {
  float analogReadVal = analogRead(readPin);
  float voltageOut = scaleAnalogValueToRange(analogReadVal, 1023);
  float brightness = scaleAnalogValueToRange(analogReadVal, 255);

  if (voltageOut != prevVoltageOut) {
    analogWrite(redLedPin, brightness);

    Serial.print("Voltage Out changed to: ");
    Serial.println(voltageOut);

    prevVoltageOut = voltageOut;
  }
  delay(100);
}

/* NOTES
DIMMABLE LEDS
Note - I didn't follow the video as I wanted to try to remember everything I had learnt thus far.

Things to remember:
- ~ port = PWM
- analogWrite - 0-255
- analogRead - 0-1023

*/