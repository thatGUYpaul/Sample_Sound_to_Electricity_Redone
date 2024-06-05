const int SOUND_SENSOR_PIN = A0; // Analog Output from Sound Sensor
const int LED_PIN = 13;           // LED connected to pin 13
const int THRESHOLD = 52;       // Threshold value for sound level

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Read the analog value from the sound sensor
  int soundLevel = analogRead(SOUND_SENSOR_PIN);

  // Print the sound level to the serial monitor
  Serial.println(soundLevel);

  // If sound level is above the threshold, turn on the LED
  if (soundLevel > THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    // Otherwise, turn off the LED
    digitalWrite(LED_PIN, LOW);
  }

  // Small delay to allow for readable serial output
  delay(100);
}
