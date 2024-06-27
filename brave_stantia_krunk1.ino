const int sensorPin = A0;  // Pin connected to the soil moisture sensor
const int ledPin = 4;      // Pin connected to the LED
const int threshold = 300; // Threshold value for dry soil

void setup() {
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
  Serial.begin(9600);        // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read the value from the soil moisture sensor
  Serial.println(sensorValue);              // Print the sensor value to the serial monitor

  if (sensorValue < threshold) {            // Check if the soil is dry
    digitalWrite(ledPin, HIGH);             // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);              // Turn off the LED
  }

  delay(1000);  // Wait for 1 second before taking another reading
}

