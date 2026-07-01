/*
  Project 2: Multi-LED Parallel Architecture and Sequential Timing Logic
  Author: Mohammad Adyan
  
  Objective: blinking LEDs upon boot in the following cycle:
  - Red LED (Pin 12): 5 Blinks
  - Green LED (Pin 11): 10 Blinks
  - Blue LED (Pin 10): 15 Blinks
*/

// Hardware Pin Configuration
const int redLED = 12;
const int greenLED = 11;
const int blueLED = 10;

void setup() {
  // Initialize all channel pins as independent outputs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  // ====================================================
  // ROUTINE 1: Red LED Blinks Exactly 5 Times
  // ====================================================
  // Blink 1
  digitalWrite(redLED, HIGH); delay(300);
  digitalWrite(redLED, LOW);  delay(300);
  // Blink 2
  digitalWrite(redLED, HIGH); delay(300);
  digitalWrite(redLED, LOW);  delay(300);
  // Blink 3
  digitalWrite(redLED, HIGH); delay(300);
  digitalWrite(redLED, LOW);  delay(300);
  // Blink 4
  digitalWrite(redLED, HIGH); delay(300);
  digitalWrite(redLED, LOW);  delay(300);
  // Blink 5
  digitalWrite(redLED, HIGH); delay(300);
  digitalWrite(redLED, LOW);  delay(300);

  // ====================================================
  // ROUTINE 2: Green LED Blinks Exactly 10 Times
  // ====================================================
  // Blink 1
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 2
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 3
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 4
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 5
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 6
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 7
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 8
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 9
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);
  // Blink 10
  digitalWrite(greenLED, HIGH); delay(300);
  digitalWrite(greenLED, LOW);  delay(300);

  // ====================================================
  // ROUTINE 3: Blue LED Blinks Exactly 15 Times
  // ====================================================
  // Blink 1
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 2
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 3
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 4
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 5
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 6
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 7
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 8
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 9
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 10
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 11
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 12
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 13
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 14
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
  // Blink 15
  digitalWrite(blueLED, HIGH); delay(300);
  digitalWrite(blueLED, LOW);  delay(300);
}

void loop() {
  // The loop is intentionally left blank. 
  // This forces the system to idle cleanly once the setup sequence completes,
  // holding until the physical hardware reset button is pressed.
}
