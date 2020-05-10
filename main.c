const int PIRSensor = 2;    
const int buzzerPin =  3;     
int sensorValue = 0;        

void setup() {
  pinMode(PIRSensor, INPUT);     
  pinMode(buzzerPin, OUTPUT);        
}
void loop() {
  sensorValue = digitalRead(PIRSensor);
  if (sensorValue == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}
