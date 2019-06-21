void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz pierwsze 10 liczb parzystych za pomoca wybranego typu petli");
}

void loop() {
  for (int i = 1; i <= 10; i++) {
    Serial.print(2*i);
    Serial.print(" ");
  }

  delay(10000);
  Serial.println();
}
