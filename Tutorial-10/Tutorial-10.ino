int readPin = A3;

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

float calculateVoltage(int analogReadVal) {
  return 5./1023. * analogReadVal;
}

void loop() {
  float v2 = analogRead(readPin);
  Serial.println(calculateVoltage(v2));
  delay(1000);
}

/* NOTES

READING ANALOG VOLTAGE WITH analogRead()

You need the curcuit from tutorial 9
- 5V pin, 330 resistor, then 100 resistor, then ground pin

We need to check the point b/w both resistors to know the voltage b/w that point and the ground pin (we hope 1.16V, see last tutorial)

Analog voltage can only be read from the A0-5 pins (labelled ANALOGs IN on the arduino)
- We can't use the pins for 2-13, as they are only for digital write

analogRead reads a SCALED voltage b/w 0 and 1023, not the actual voltage!
- A3 pin wire at same column as the v5 pin wire 
  - 1023 read value (RV) = 4.95v!
- A3 pin wire in b/w resistors (R2)
  - 236 read value
  - (5/1023)*236RV = 1.16V!
- Nothing = 0RV = 0V

In my own words
When the the analog in pin is at
- the v5 pin column -> 5v
- the column where both resistors are plugged in -> 5v minus the volts that the first resistor blocks (in this case 5v-3.84v=1.16)
- same column as ground pin -> 0 (as the 100ohm resistor blocked the remaining 1.16v)

---

PRINTING TO TERMINAL:
Serial.begin(9600) - param is vaud rate, see future tutorial
- do this in the setup

Serial.println(...); - put whatever you wanna print in the brackets

You need a dot after a number so the arduino knows it is a decimal number e.g. 243. == 243.0
- doing int math = int number result. 
- float type === decimal

---

HWK A) - 10k & 1k resistors. Do a curcuit analysis and then build it with the breadboard.

Knowns:
- Voltage = 5v
- R1 = 10k
- R1 = 1k

What is the current?
I = V/R -> 5/(10000+1000) = 5/11000 = 0.000454545A = 0.4545mA is the current

Voltage across R1?
V = IR -> 0.4545mA * 10000 = 0.000454545A * 10000 = 4.545V

Voltage across R2?
V = IR -> 0.4545mA * 1000 = 0.000454545A * 1000 = 0.455V

We know this is right becasue 4.545V + 0.455V = 5V, which is the input voltage!

--

HWK B) - 10k & 2k resistors. Do a curcuit analysis and then build it with the breadboard.

Knowns:
- Voltage = 5v
- R1 = 10k
- R1 = 2k

What is the current?
I = V/R
(5 / 12000) = 0.00041666... * 1000 = 0.41666...mA

What is the voltage at R1?
V = IR
0.00041666... * 10000 = 4.1666...V

What is the voltage at R2?
0.00041666... * 2000 = 0.8333...V

Check:
4.17V * 0.83V = 5V!

*/