#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 

const int speaker=9;
int music[]={C,C,E,D,C,G,G,G,B,C};
int ms[]={4,4,4,4,4,4,2,4,4,4,4,1,4,4,4,4,4,4,2,4,4,4,4,1};
int pongdang[]={261,293,329,329,261,329,391,
              440,391,261,293,329,329,261,329,391,440,391,
            440,391,329,440,391,329,293,293,261,293,329,391,391,
            440,440,391,440,523,523,523,391,391,329,293,261,
            293,329,261,329,391,391,391,293,329,349,329,293,261};
int ms2[]={2,2,2,2,2,2,1,1,1,2,2,2,2,2,2,1,1,2,4,2,2,4,2,2,2,2,2,2,2,2,2,3,1,2,2,2,2,2,3,1,2,2,5};
int btn=8;


void setup() {
  // put your setup code here, to run once:
  pinMode(speaker,OUTPUT);
  pinMode(btn,INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
//    digitalWrite(speaker,HIGH);
//    delay(1000);
//    digitalWrite(speaker,LOW);
//    delay(1000);
//  for(int i=0;i<12;i++){
//    tone(speaker,music[i],200);
//    delay(300);
//   
//  }
//  delay(200);
//  for(int i=12;i<25;i++){
//    tone(speaker,music[i],200);
//    delay(300);
//   
//  }
//
//  for(int i=0;i<sizeof(pongdang);i++){
//    int ms1=1000/ms2[i];
//    tone(speaker,music[i],ms1);
//    delay(ms1);
//    noTone(speaker);
//  }
//
//  delay(1000);
  int val=digitalRead(btn);
  Serial.println(val);
  if(val==HIGH){
    tone(speaker,392,1000);
  }

}
