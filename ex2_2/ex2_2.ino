void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz srednia arytmetyczna n liczb parzystych");
  Serial.print("Podaj ilosc liczb do usrednienia (n): ");
}

void loop() {
  if(Serial.available()) {
    String serialInput = Serial.readStringUntil('\n');
    Serial.println(serialInput);
    sredniaArytmetyczna(serialInput.toFloat());
    Serial.print("Podaj ilosc liczb do usrednienia (n): ");
  }
}

void sredniaArytmetyczna(float n) {
  float wynik = 0;
  for (int i = 1; i <= n; i++) {
    wynik += 2*i;
  }

  wynik /= n;
  String output = "Srednia arytmetyczna " + String(n) 
  + " pierwszych liczb parzystych: " + String(wynik) + "\n";
  Serial.println(output); 
}
