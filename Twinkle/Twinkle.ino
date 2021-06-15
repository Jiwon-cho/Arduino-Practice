const int ledPin=7;
const int ledPin2=9;
const int ledPin3=13;
int sec=5000;
void setup()
{
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
    delay(1000);
  digitalWrite(ledPin2, HIGH);
    delay(1000);
     digitalWrite(ledPin2,LOW);
     delay(1000);
     digitalWrite(ledPin3, HIGH);
    
  
  delay(1000);
  digitalWrite(ledPin3,LOW);
 
    

}
