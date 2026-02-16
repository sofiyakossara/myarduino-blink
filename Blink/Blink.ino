void setup() {
  pinMode(12, OUTPUT); // Встроенный светодиод обычно на пине 13
}

void loop() {
  digitalWrite(12, HIGH);   // включить светодиод
  delay(100);              // подождать 1 секунду
  digitalWrite(12, LOW);    // выключить светодиод
  delay(100);              // подождать 1 секунду
}
