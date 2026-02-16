void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  blinkSOS();  // режим SOS
}

void blinkSOS() {
  // Три коротких (S)
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(150);
    digitalWrite(13, LOW);
    delay(150);
  }
  
  delay(300); // пауза между буквами
  
  // Три длинных (O)
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(450);
    digitalWrite(13, LOW);
    delay(150);
  }
  
  delay(300); // пауза между буквами
  
  // Три коротких (S)
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(150);
    digitalWrite(13, LOW);
    delay(150);
  }
  
  delay(2000); // пауза перед повтором
}
