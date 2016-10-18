const int ledCount = 10;
int ledPins[]={2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for(int thisLed = 0 ;thisLed < ledCount;thisLed++)
  {
    pinMode(ledPins[thisLed],OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(A0);
int ledLevel = map(sensorValue,750,950,0,ledCount);
for(int thisLed = 0 ;thisLed < ledCount;thisLed++)
  {
    if(thisLed<ledLevel){
      digitalWrite(ledPins[thisLed],HIGH);
    }
    else{
      digitalWrite(ledPins[thisLed],LOW);
    }
  }
}
