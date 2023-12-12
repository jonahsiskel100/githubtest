int ledPin100 = 2;
int ledPin500 = 3;
void setup() {
  pinMode(ledPin100, OUTPUT);
  pinMode(ledPin500, OUTPUT);
}

void loop() {
  sequence();
}
void sequence() {
  digitalWrite(ledPin100, HIGH);
  digitalWrite(ledPin500, HIGH);
  delay(100);
  digitalWrite(ledPin100, LOW);
  digitalWrite(ledPin500, LOW);
}