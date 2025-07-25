
void setup() {
  // put your setup code here, to run once:
  pinMode(PD7, INPUT);
  digitalWrite(PD7, 1);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(PD7);
  Serial.println(state);
  delay(50);
}
