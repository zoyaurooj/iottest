int potentiometer = A1;
int led = 4;

void setup() {
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int reading = analoagRead(potentiometer);
  Serial.println("Potentiometer :" + String(reading));
  digitalWrite(led,reading*(255/1023.0));
  delay(300);
  
 
}
