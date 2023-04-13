const int redLed = 11;
const int greenLed = 10;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(1000);
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(1000);
}