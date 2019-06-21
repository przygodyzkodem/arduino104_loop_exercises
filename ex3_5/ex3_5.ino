const int n = 5; //Ilosc wyrazow w ciagu
const int x = 3; //Wartosc x

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz sume ciagu 1 + x + x^2/2! + x^3/3! + ...");
}

void loop() {
  double suma = 1, wyrazCiagu = 1;

  for (int i = 1; i < n; i++) {
    wyrazCiagu = wyrazCiagu*x/(double)i;
    suma += wyrazCiagu;
  }

  String wynik = "Suma " + String(n) 
  + " wyrazów ciągu wynosi: " + String(suma, 4);

  Serial.println(wynik);
  delay(10000);
}
