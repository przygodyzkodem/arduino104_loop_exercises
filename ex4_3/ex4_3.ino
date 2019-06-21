const int wysokosc = 6;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Napisz program wyswietlajacy trojkat Pascala (6 rzedow)");
}

void loop() {
  int c = 1;
  for(int i = 0; i < wysokosc; i++) {
    for(int odstep = 1; odstep <= wysokosc-i; odstep++)
        Serial.print("  ");
        
    for(int j = 0; j <= i; j++) {
       if (j==0 || i==0) {
        c = 1;
       } else {
        c = c*(i-j+1)/j;
       }
       
       Serial.print(c);
       Serial.print("   ");
    }
  
    Serial.println();
  }

  delay(10000);
}
