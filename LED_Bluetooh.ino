int LED = 8;
int estado = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if( Serial.available()>0)
  {
    estado = Serial.read();
  }
  
  switch(estado)
  {
    case 'N':
    digitalWrite(LED, HIGH);
    break;
    case 'F':
    digitalWrite(LED, LOW);
    break;
  }

}
