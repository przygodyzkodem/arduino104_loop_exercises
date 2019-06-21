const int n = 10;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Napisz program wyswietlajacy pierwsze n wyrazow ciagu Fibonacciego");
}

void loop() {
  int Fi_2 = 0, Fi_1 = 1, Fi; //Wyrazy ciagu o indeksach i-2, i-1, i
  Serial.println(Fi_2);
  Serial.println(Fi_1);
  for(int i = 3; i <= n; i++) {
    Fi = Fi_2 + Fi_1;
    Serial.println(Fi);
    Fi_2 = Fi_1;
    Fi_1 = Fi;
  }

  Serial.println();
  delay(10000);
}
