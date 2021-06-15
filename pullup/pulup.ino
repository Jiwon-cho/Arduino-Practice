
const int ledPin=7;


void setup()
{
 
  pinMode(ledPin,OUTPUT);
  
}

void loop()
{
 //입력장치로부터 데이터받기
 digitalWrite(ledPin,HIGH);
 delay(1000);
 digitalWrite(ledPin,LOW);
}
