// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  }
void loop() {
  // print out the state of the button:
  Serial.println("SRM*");
  delay(500);        // delay in between reads for stability
}
