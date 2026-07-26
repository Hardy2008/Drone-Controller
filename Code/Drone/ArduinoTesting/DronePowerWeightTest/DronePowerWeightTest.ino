const int motorPin = 5;
const int pontiPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int potiWert = analogRead(pontiPin);
  int motorgeschwindigkeit = map(potiWert, 0, 1023, 0 ,255); // map(value, fromLow, fromHigh, toLow, toHigh);

  analogWrite(motorPin, motorgeschwindigkeit);
  Serial.print("Speed: ");
int prozent = map(potiWert, 0, 1023, 0, 100);
  Serial.print(prozent);
  Serial.println("%");
  delay(10);
}
