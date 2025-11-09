void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

/* NOTES - OHMS LAW & SIMPLE CURCUIT DESIGN
We need to know ohms law and curcuit analysis to make curcuits

CURCUIT ANALYSIS
Example of why it is important w/ resistors:
Too small resistor - burn LED out
Too big resistor - LED is dim/doesnt turn on

Water example 
- Voltage is like pressure pump, and current is like water flow
- more voltage eqv to more pressure, so more current flow
- Resistor is like an abstruction to the current -> slows the flow

Current is flow of electrons
- neg side - pushes electrons around the neg side, and is attracted to the plus
- Pos side - start of the current flow
!- current flow is in the OPPOSITE flow to the electrons.

OHMS LAW
Voltage = Current * Resistance, V = IR

Measurements:
Voltage -> volts
Currents -> amps
Resistance -> Ohms

Usually you are working out the current in curcuit analysis, so I = V/R

All three of these are ohms law, just pick the one you need for your issue:
- V = IR
- I = V/R
- R = V/I

Example 1) you have 5V and 330 resistor, then what is the current?:
5/330 = 15.15e-3 amps = 15.15mA (mili Amps, so x1000)
- We tend to use mili amps for microprocessors, and Amps for bigger stuff like houses

Example 2a) 5V, 2x resistors -> R1 is 330ohms and R2 is 100ohms. Current is what?
These resistors are in series, so we can ADD the resistances together
5 / (330 + 100) = 5/430 = 11.63mA (so 5/430 * 1000, because its mili amps)

Example 2b) Whats the voltage across R1 (330omhms) and R2(100ohms) (V1 and V2)
v1 = I*R1 = 11.63e-3A * 330 = 3.84v
V2 = I*R2 = 11.63e-3A * 100 = 1.16V
The voltage around a loop sums to your output voltage e.g. 3.84+1.16 = 5v!

There is a v5 port you can use to apply a 5v voltage over the curcuit without writing any code!
When measuring with a voltage measurer, the result may be slightly below 5v as the ardunio may not truely be sending out a 5v voltage.
*/