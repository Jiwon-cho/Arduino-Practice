int sensor=8;
int ledPin=5;
int speaker=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(speaker,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(sensor);
  Serial.println(val);
  if(val==HIGH){
    digitalWrite(ledPin,HIGH);
    tone(speaker,486,1000);
  }else{
    digitalWrite(ledPin,LOW);
  }
  delay(1000);
}
