int pinNum = 9;
int brightMax = 255;
int brightOff = 0;
int bright5 = 5;
int bright10 = 10;
int bright100 = 100;

void setup() {
  pinMode(pinNum, OUTPUT);
}

void loop() {
  analogWrite(pinNum, brightMax);
  delay(500);
  analogWrite(pinNum, bright100);
  delay(500);
  analogWrite(pinNum, bright10);
  delay(500);
  analogWrite(pinNum, bright5);
  delay(500);
  analogWrite(pinNum, brightOff);
  delay(500);
}

/* analogWrite()
digitalWrite() - sets pins 2-13 on/off
What if you want something b/w on/off voltage -> analog voltage!

Only some pins work for analog - ~/tilda pins only!

analogWrite() -> params are pin number & voltage (b/w 0-255)

VOLTAGE PARAMS
- 0 = volts
- 255 = 5 volts
  - 5V because in binary 8 bits (2^8) === 256. It's not 256 as the max for analogWrite()  because we start counting at 0, so onyl get to 255

analogWrite(pinNum, 255); === digitalWrite(pinNum, HIGH)
*/
