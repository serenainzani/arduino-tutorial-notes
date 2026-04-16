String question = "Please enter the number of blinks:";
int pin = 12;

void setup() {
  // more old school to use lower numbers - so slower - due flakier connections
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop() {
  Serial.println(question);
  // Serial.available - number of bytes in the serial port
  while (Serial.available() == 0) { 
    // do nothing; wait
  }
  int blinks = Serial.parseInt();
  for(int i = 0;  i < blinks; i += 1){
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
  Serial.print(blinks);
  Serial.println(" blinks complete!");
  Serial.print("Fun Fact: The area of a circle with a radius of ");
  Serial.print(blinks);
  Serial.print(" has a radius of ");
  Serial.println(3.14159 * blinks * blinks);
  Serial.println();
}

/* NOTES - Reading Numbers from the Serial Monitor

To get data from serial, we need to
1) ask - Serial.println(question);
2) wait - while (Serial.available() == 0) {}
3) read - Serial.parseInt();

*/
