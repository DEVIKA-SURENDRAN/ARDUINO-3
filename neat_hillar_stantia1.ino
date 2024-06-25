const int piezoPin = 7;   // Pin connected to the piezo sensor
const int ledPin = 9;     // Pin connected to the LED
int buttonState = 0;      // Variable to store the state of the "button"

void setup() {
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
  pinMode(piezoPin, INPUT);  // Set the piezo pin as an input
}

void loop() {
  // Read the value from the piezo sensor
  int sensorValue = analogRead(piezoPin);

  // Check if the piezo sensor is "pressed"
  if (sensorValue > 100) {
    if (buttonState == 0) {
      buttonState = 1;  // Set button state to "pressed"
      digitalWrite(ledPin, HIGH);  // Turn on the LED
      delay(500);  // Wait for 500 milliseconds
      digitalWrite(ledPin, LOW);   // Turn off the LED
      delay(500);  // Wait for 500 milliseconds
    }
  } else {
    buttonState = 0;  // Reset button state when not pressed
  }
}
