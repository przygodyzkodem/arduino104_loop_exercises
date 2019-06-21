void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Napisz program sprawdzajacy, czy podana liczba jest liczba doskonala");
  //Liczba doskonala - liczba naturalna, ktora jest suma wszystkich swych dzielnikow wlasciwych (czyli mniejszych od niej samej).
  Serial.print("Podaj liczbe: ");
}

void loop() {
  if(Serial.available()) {
    String wartosc = Serial.readStringUntil('\n');
    Serial.println(wartosc);
    liczbaDoskonala(wartosc.toInt());
    Serial.print("Podaj liczbe: ");
  }
}

void liczbaDoskonala(int x) { 
  int suma = 0;
  for (int i = 1; i < x; i++) {
    if (x % i == 0) {
      suma += i;
    }
  }

  if (suma == x) {
    Serial.println("Podana liczba jest doskonala :) \n");
  } else {
    Serial.println("Podana liczba nie jest doskonala :( \n");
  }
}
