// put your setup code in setup, to run once:
void setup() {
  //pinMode() -> pin number and output/input type
  pinMode(13,OUTPUT);
}

// put your main code in loop, to run repeatedly:
void loop() {
  //digitalWrite() -> port number and off/on with LOW/HIGH
  digitalWrite(13, HIGH);
  // Pauses for 1000 ms (1s)
  delay(23);
  digitalWrite(13,LOW);
  delay(23);
}

/* Lesson Notes
SETUP
In toolbar -> Tools:
- You need to set the port to Ardunio Uno
- You need to set the board to Arduino AVR Boards -> Arduino Uno
  - 'Arduino AVR Boards' is the default install in sidebar 'Board Mananger'. If you had diff arduino types, you can install the package you need for it.

CODING
Pin 13 - defaults to the light on the arduino
All caps important for pinMode and digitalWrite LOW/HIGH and OUTPUT/INPUT

ASSIGNMENTS
- How low can you make the delay but make the blinking percievable still? - 23 blinking, 13 flickering
*/