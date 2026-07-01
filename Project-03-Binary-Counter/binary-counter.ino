/* Project 3: 4-Bit Binary Counter using LEDs
   Target Architecture: Elegoo Uno R3 / ATmega328P
   
   Hardware Configuration (Right to Left based on physical wiring):
   - Pin 9  -> Blue LED   (Least Significant Bit - Bit 0)
   - Pin 10 -> Green LED  (Bit 1)
   - Pin 11 -> Red LED    (Bit 2)
   - Pin 12 -> Yellow LED (Most Significant Bit - Bit 3)
*/

// Assigning descriptive variable names to designated I/O pins
int blueLED = 9;    // 1s place (LSB)
int greenLED = 10;  // 2s place
int redLED = 11;    // 4s place
int yellowLED = 12; // 8s place (MSB)

void setup() {
  // Initialize all four digital control lines as low-impedance OUTPUTs
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // --- STATE 0 (Decimal 0 -> Binary: 0000) ---
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  delay(1000);

  // --- STATE 1 (Decimal 1 -> Binary: 0001) ---
  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);

  // --- STATE 2 (Decimal 2 -> Binary: 0010) ---
  digitalWrite(greenLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);

  // --- STATE 3 (Decimal 3 -> Binary: 0011) ---
  digitalWrite(greenLED, HIGH);
  digitalWrite(blueLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);

  // --- STATE 4 (Decimal 4 -> Binary: 0100) ---
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);

  // --- STATE 5 (Decimal 5 -> Binary: 0101) ---
  digitalWrite(blueLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  digitalWrite(redLED, LOW);

  // --- STATE 6 (Decimal 6 -> Binary: 0110) ---
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  // --- STATE 7 (Decimal 7 -> Binary: 0111) ---
  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  // --- STATE 8 (Decimal 8 -> Binary: 1000) ---
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(yellowLED, LOW);

  // --- STATE 9 (Decimal 9 -> Binary: 1001) ---
  digitalWrite(blueLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(blueLED, LOW);
  digitalWrite(yellowLED, LOW);

  // --- STATE 10 (Decimal 10 -> Binary: 1010) ---
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  delay(1000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
}
