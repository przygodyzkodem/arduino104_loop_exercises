void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz pierwsze 10 liczb naturalnych za pomoca petli while, do..while oraz for");
}

void loop() {
  for (int i = 1; i<=10; i++) {
    Serial.print(i);
    Serial.print(" ");
  }
  Serial.println();
  
  int i = 1;
  while (i <= 10) {
    Serial.print(i);
    Serial.print(" ");
    i++;
  }
  Serial.println();

  i = 1;
  do {
    Serial.print(i);
    Serial.print(" ");
    i++;
  } while (i <= 10);
  Serial.println();
  
  delay(10000);
  Serial.println();
}
