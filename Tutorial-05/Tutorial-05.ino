int digit1Pin = 12, digit2Pin = 7, digit4Pin = 4, digit8Pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(digit1Pin, OUTPUT);
  pinMode(digit2Pin, OUTPUT);
  pinMode(digit4Pin, OUTPUT);
  pinMode(digit8Pin, OUTPUT);

}

void loop() {
  for(int i = 0; i <= 16; i++){
    if ((i & 1) != 0) {
      digitalWrite(digit1Pin, HIGH);
    }
    if ((i & 2) != 0) {
      digitalWrite(digit2Pin, HIGH);
    }
    if ((i & 4) != 0) {
      digitalWrite(digit4Pin, HIGH);
    }
    if ((i & 8) != 0) {
      digitalWrite(digit8Pin, HIGH);
    }
    delay(750);

    digitalWrite(digit1Pin, LOW);
    digitalWrite(digit2Pin, LOW);
    digitalWrite(digit4Pin, LOW);
    digitalWrite(digit8Pin, LOW);
  }
}

/* Notes
BINARY
Semi conductors switch between being a conductor or insulator by either applying a current or not
- Like binary 1 or 0
Arduinos only understand binary
- Arduinos are made up of loads and loads of silion 'switches', 
  and the binary on/off state of them can represent any data commucatable in binary

---

HWK
Make a LED binary counter up to 15

4 LEDS for each LED + ground
4 curcuits for each LED + ground
4 pins for each LED + ground
4 Resisters for each LED + ground
4 pinModes

---

How to print/console log stuff

Code:
Serial.begin(9600);
Serial.println(i, DEC);

Terminal:
Open Tools -> 'Serial Monitor', and make sure baud matches what is in .begin
*/
