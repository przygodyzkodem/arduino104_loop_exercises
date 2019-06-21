const int wysokosc = 5;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz piramide z gwiazdek. Wysokosc piramidy 5 rzedow.");
}

void loop() {
  int odstepy = wysokosc;

  for(int i = 1; i <= wysokosc; i++) {
    for(int k = odstepy; k >= 1; k--) {
      Serial.print(" ");
    }
                      
    for(int j=1;j<=i;j++)
      Serial.print("* ");
  
    Serial.println();
    odstepy--;
  }

   delay(10000);
}
