// The setup function runs once when you press reset or power the board
void setup() {
  
  Serial.begin(9600);
 
}

// The loop function runs over and over again forever
void loop() {
  
  // Alternate between full speed and off
  if (potValue == 0) {
    motorValue = 255;
  } else {
    motorValue = 0;
  }
  
  // Set the moroto speed
  analogWrite(motorPin, motorValue);  
  Serial.println(motorValue);
 
  delay(1000);
 
}