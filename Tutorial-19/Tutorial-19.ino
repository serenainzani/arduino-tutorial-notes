void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What is your name?: ");
  while(Serial.available() == 0){
    // wait; do nothing
  }
  String name = Serial.readString();
  Serial.print("Hello, ");
  Serial.print(name);
  Serial.println("!");
  Serial.println("Weclome to Arduino!");
  Serial.println();
}

/* NOTES - Reading Strings from the Serial Monitor

Paused at 10:11 https://youtu.be/MAnAc_t0OrM?si=O3ioltJgb3G3OGXe&t=611 , about to make a curcuit
*/
