void setup() {
  pinMode(3, OUTPUT); // Set the relay pin as an output
  pinMode(A0,INPUT); //Set Soil value as input 
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the moisture level from the sensor
  int moistureLevel = analogRead(A0);

  // Check if the moisture level is below the threshold
  if (moistureLevel < 900) {
    Serial.println("Moisture level is low - watering the plant");
    digitalWrite(3,LOW);
    delay(1 000);

  }
  else 
  {
    Serial.println("STOP WATERING");
    digitalWrite(3,HIGH);
    delay(1000);
  }
}