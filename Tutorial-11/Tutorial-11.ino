int counter = 1;
float pi = 3.14;

void setup() {
  Serial.begin(9600);

}

void loop() {
  float area = pi * counter * counter;
  Serial.print("A circle with a radius of ");
  Serial.print(counter);
  Serial.print(" has an area of ");
  Serial.println(area);
  counter += 1;
  delay(1000);
}

/* NOTES 
PRINT COMMANDS FOR ARDUINOS

Serial.begin(9600); - initalises the printing
- baud rate does not matter, just make sure it matches whatever you set the serial monitor to

Serial.print();
- prints without starting a new line

Serial.println();
- prints the starts a new line.

Baud rate
- higher -> pushes the data faster -> prints faster (not noticable here since we've used a delay)

printf like in normal C++ does not work, as we are not outputting to a traditional terminal/stnout
*/