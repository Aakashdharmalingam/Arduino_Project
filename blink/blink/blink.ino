const int a ;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PD7, INPUT);
  digitalWrite(PD7, 1); // HIGH state
  pinMode(PC0, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
    // int c =analogRead(PC0);
    // Serial.println(c);
    // delay(25);
    if(digitalRead(PD7) != 0 )// state high
    {
        digitalWrite(LED_BUILTIN, 0);
        // int a = digitalRead(PD7);
        // Serial.println(a);
        Serial.println("LED OFF");
    }  
    else// state low
    {
        digitalWrite(LED_BUILTIN, 1);
        // int b = digitalRead(PD7);
        // Serial.println(b);
        Serial.println("LED ON");
    }
      
}
