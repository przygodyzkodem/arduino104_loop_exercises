void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz trojkat prostokatny z gwiazdek. 5 gwiazdek w podstawie");
}

void loop() {
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= i; j++)
      Serial.print("*");
    Serial.println("\n");
   }
   delay(10000);
}
