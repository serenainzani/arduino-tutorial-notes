int pinNum = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinNum, INPUT);
}

float calcVoltage(int value) {
  return 5./1023 * value; // 5 because 5V input pin, a 5. so its a decimal number so one gets a decimal result
}

void loop() {
  int analogReadVal = analogRead(pinNum);
  Serial.println(calcVoltage(analogReadVal));
  delay(1000);
}

/* NOTES
THE POTENTIOMETERS

What is it?
- variable resistor - you can change the resistor
- turn the knob -> change the resistance
- always has 3 legs - 2 outside, one in the middle
- The one in the kit has a knob you can use to turn it, and then remove it
- don't force it when you turn it - easy to break. 
  - but dw cheap and safe if you get something wrong
- good for curcuit analysis
- diff potentiometers have diff resistances (our ones are 10k ohms)

The diff legs
- 2 resistors on the inside (R1 & R2), in b/w the 2 outside leads
  - together make the resistance Rt (R1 + R2)
- 3rd lead connects inbetween R1 & R2 (voltage out, vout)

Turning the knob:
- turn knob to left -> R2 === 0 -> R1 === RT === 10K ohms
- turn kob to right -> R1 === 0 -> R2 === RT === 10K ohms
- turn kob to middle -> R1 === 5k ohms -> R2 === 5K ohms
- turn kob to left -> R2 === 1k ohms -> R1 === 9K ohms
  - total is always 10k ohms

Example:
- 5v input with a potentiometer
- I = V/R = 5v/10000ohms = 0.5mA (Amps of the curicuit at the start)
- VOut (3rd leg) = .5mA * R2
- dial in the middle = .5A * 5k

Good for:
- controlling brightness of LED
- speaker volume

Making the curcuit
- put over the trench - easiest way to have pins each in their own column
  and still have space to plug in other things
*/
