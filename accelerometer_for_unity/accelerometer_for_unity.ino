void setup(){
  Serial.begin(9600);
  pinMode(9, INPUT); // Brake
  pinMode(10, INPUT); // Thrust
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  if(digitalRead(9) == HIGH) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  if(digitalRead(10) == HIGH) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  // Accelerometer values
  Serial.print(analogRead(0));
  Serial.print(",");
  Serial.print(analogRead(1));
  Serial.print(",");
  Serial.print(analogRead(2));
  Serial.print(",");
  // Brake Button
  Serial.print(digitalRead(9));
  Serial.print(",");
  // Thrust Button
  Serial.print(digitalRead(10));
  Serial.print(",");
  // Pot
  Serial.print(analogRead(3));
  Serial.println(",");
}