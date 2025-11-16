int readPin = A3;
int redLedPin = 9, yellowLedPin = 7, greenLedPin = 4;
float prevVoltageOut;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  Serial.begin(9600);
}

float calculateVoltage(int analogReadVal) {
  return 5./1023. * analogReadVal;
}

void loop() {
  float analogReadVal = analogRead(readPin);
  float voltageOut = calculateVoltage(analogReadVal);

  if (voltageOut != prevVoltageOut) {
    digitalWrite(greenLedPin, voltageOut < 2.5 ? HIGH : LOW);
    digitalWrite(yellowLedPin, voltageOut >= 2.5 && voltageOut < 4 ? HIGH : LOW);
    digitalWrite(redLedPin, voltageOut >= 4 ? HIGH : LOW);

    Serial.print("Voltage Out changed to: ");
    Serial.println(voltageOut);
  }
  delay(100);
  prevVoltageOut = voltageOut;
}

/* NOTES 
Program above uses if statements to determine what LED to light, depending on the
voltage set by the potentiometer 

HWK
3 LEDS:
<3V -> green led
3-4v -> yellow led (I changed this to 2.5v)
4> -> red led

SELF LEARNING
You can use ternary operator instead of IF statements, same structure as JS.
*/