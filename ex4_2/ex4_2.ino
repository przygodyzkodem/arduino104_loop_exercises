void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Napisz program sprawdzajacy, czy podana liczba jest liczba pierwsza");
  //Liczba pierwsza - liczba naturalna wieksza od 1, ktora dzieli sie tylko przez 1 i sama siebie.
  Serial.print("Podaj liczbe: ");
}

void loop() {
  if(Serial.available()) {
    String wartosc = Serial.readStringUntil('\n');
    Serial.println(wartosc);
    liczbaPierwsza(wartosc.toInt());
    Serial.print("Podaj liczbe: ");
  }
}

void liczbaPierwsza(int x) { 
  int licznik = 0;
  for(int i = 2; i <= x/2; i++) {
    if(x % i == 0) {
      licznik++;
      break;
    }
  }
  
  if (licznik == 0 && x != 1)  {
    Serial.println("Podana liczba jest liczba pierwsza \n");
  } else {
    Serial.println("Podana liczba nie jest liczba pierwsza \n");
  }
}
