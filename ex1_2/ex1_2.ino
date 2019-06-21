void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz malejaco cyfry od 9 do 0 za pomoca petli while, do..while oraz for");
}

void loop() {
  for (int i = 9; i>=0; i--) {
    Serial.print(i);
    Serial.print(" ");
  }
  Serial.println();
  
  int i = 9;
  while (i >= 0) {
    Serial.print(i);
    Serial.print(" ");
    i--;
  }
  Serial.println();

  i = 9;
  do {
    Serial.print(i);
    Serial.print(" ");
    i--;
  } while (i >= 0);
  Serial.println();
  
  delay(10000);
  Serial.println();
}
