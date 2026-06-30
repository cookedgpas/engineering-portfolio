void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on by supplying 5V to the circuit
  delay(1000);                  // Wait for 1 second (1000 milliseconds)
  
  digitalWrite(ledPin, LOW);    // Turn the LED off by dropping the pin to 0V (GND)
  delay(1000);                  // Wait for 1 second
}
