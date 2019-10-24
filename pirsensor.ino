int ledpin=13;
int pir=2,val;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(pir,INPUT);
}

void loop() {
  delay(500);
  val=digitalRead(pir);

  if(val==HIGH)
  {
      Serial.println("movement reading"+String(val));
      digitalWrite(ledpin,HIGH);
  }
  
  else if(val==LOW)
  {
    Serial.println(" no movement "+String(val));
digitalWrite(ledpin,LOW);
  }
delay(2000);
}
