void setup() {
  pinMode(13, OUTPUT); // Встроенный светодиод обычно на пине 13
}

void loop() {
  digitalWrite(13, HIGH);   // включить светодиод
  delay(500);              // подождать 1 секунду
  digitalWrite(13, LOW);    // выключить светодиод
  delay(500);              // подождать 1 секунду
}
