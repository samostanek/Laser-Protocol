void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delayMicroseconds(200);
  digitalWrite(12, LOW);
  delayMicroseconds(200);
}
