void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Napisz program wyswietlajacy cyfry podanej liczby od konca");
  Serial.print("Podaj liczbe: ");
}

void loop() {
  if(Serial.available()) {
    String wartosc = Serial.readStringUntil('\n');
    Serial.println(wartosc);
    odwrocLiczbe(wartosc.toInt());
    Serial.print("Podaj liczbe: ");
  }
}

void odwrocLiczbe(int x) { 
  int wynik = 0;
  for (int i = x; x != 0; x /= 10) {
    int tmp = x % 10;
    wynik = wynik*10 + tmp;
  }
  
  String wyjscie = "Odwrocona liczba: " + String(wynik) + "\n";
  Serial.println(wyjscie);
}
