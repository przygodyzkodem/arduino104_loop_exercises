void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Wypisz sume pierwszych 10 liczb parzystych");
}

void loop() {
  // put your main code here, to run repeatedly:
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += 2*i;
  }
  Serial.println(sum);

  delay(10000);
}
