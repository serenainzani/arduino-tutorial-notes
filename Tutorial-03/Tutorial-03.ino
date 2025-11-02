int redPort = 2;
int bluePort = 6;
int greenPort = 10;

void setup() {
  pinMode(redPort, OUTPUT);
  pinMode(bluePort, OUTPUT);
  pinMode(greenPort, OUTPUT);
}

void blink(int port, int reps) {
  for (int r = 0; r < reps; r++) {
    digitalWrite(port, HIGH);
    delay(250);
    digitalWrite(port, LOW);
    delay(250);
  }
}

void loop() {
  blink(redPort, 5);
  blink(bluePort, 10);
  blink(greenPort, 15);

}

/* NOTES *
- We can send/recieve signals from the Arduino pins
- Curcuit diagram gives us a schematic to build
- Breadboards help keep your curcuits organised

HOW DO BREADBOARDS WORK?
Only holes in the same column are connected (e.g 1a-1e, 2f-2j)
- center region marks two diff columns!
- e.g. if you plug an LED in, needs to both be in the same column
- rows are NOT connected

Speical rows - rows across the top and bottom are connected
- top 2 are not connected together. So minus row is not connected to the plus row
if you need more pins, you can plug you pin into either the plus/minus
- e.g. if you plu theg ground pin into one of the minus rows, the holes in 
that minus row become ground pins as well

MAKING THE CURCUIT IRL
- same script as week 1, we've just now extended PIN 13 onto the breadboard
- Resistors can go either way around (they are non-polarised)
- legs of leds, resistors etc need to be on different columns (prevents short curcuit)
You could use any pin 2-13. Just change the pin mode
- Pin 0 & 1 are used for comms

HWK
- 3 LEDS red,blue,green
1) red 5x time blink
2) blue 10x time blink
3) green 15x blink

You'll need 3 pin modes
Resistor per LED.
*/