void setup() {
  // put your setup code here, to run once:
  pinMode(PC0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    int c =analogRead(PC0);
    Serial.println(c);
    delay(25);
}
