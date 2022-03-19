int sound =9;

void setup(){
  pinMode(sound,INPUT);
  pinMode(13,OUTPUT);
}

void loop(){
  int a=digitalRead(sound);
 if(a>=HIGH){
  digitalWrite(13,HIGH);
 }
 else{
  
  digitalWrite(13,LOW);
 }
 }
