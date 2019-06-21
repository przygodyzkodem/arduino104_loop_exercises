void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz trojkat prostokatny z cyfr. Wszystkie 10 cyfr w podstawie");
}

void loop() {
  for(int i = 0; i <= 9; i++) {
    for(int j = 0; j <= i; j++)
      Serial.print(j);
    Serial.println("\n");
   }
   delay(10000);
}
