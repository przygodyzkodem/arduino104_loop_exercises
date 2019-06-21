const int wysokosc = 5;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz diament z gwiazdek. Wysokosc polowy diamentu 5 rzedow.");
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

   for(int i = wysokosc - 1; i >= 1; i--) {
     for(int j = 1; j <= wysokosc-i; j++)
       Serial.print(" ");
     
     for(int j = 1; j <= i; j++)
       Serial.print(" *");
     Serial.println();
   }

   delay(10000);
}
