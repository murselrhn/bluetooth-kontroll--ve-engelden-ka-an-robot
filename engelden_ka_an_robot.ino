int mesafe;
int sure;
int veri;
#define sag_ileri 8
#define sag_geri 9
#define sol_ileri 10
#define sol_geri 11
#define trig 5
#define echo 4
#define sagm 3
#define solm 6

void setup() {

  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT); 
  Serial.begin(9600);
 
}

void loop() {

  
 if(Serial.available() ){
  veri = Serial.read();
  Serial.println(veri);
  
  }
else if(veri == 49){
   analogWrite(sagm,175);
   digitalWrite(sag_ileri,HIGH);
  digitalWrite(sag_geri,LOW);
  analogWrite(solm,175);
  digitalWrite(sol_ileri,HIGH);
  digitalWrite(sol_geri,LOW);
  }
 else if(veri == 51){
 analogWrite(sagm,100);
    digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,HIGH);
  analogWrite(solm,100);
  digitalWrite(sol_ileri,HIGH);
  digitalWrite(sol_geri,LOW);
 }
 else if(veri == 50){
 analogWrite(sagm,175);
  digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,HIGH);
  analogWrite(solm,175);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,HIGH);
 }
 else if(veri == 52){
analogWrite(sagm,100);
    digitalWrite(sag_ileri,HIGH);
  digitalWrite(sag_geri,LOW);
  analogWrite(solm,100);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,HIGH);
 }
  else if (veri == 48){
      digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,LOW);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,LOW);
 }
 else if (veri == 77){
      digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,LOW);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,LOW);
 }
 else if (veri == 53){
      digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,LOW);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,LOW);
 }
 while (veri == 111){
  digitalWrite(trig,HIGH);
    delay(1);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = (sure/2)/29,1;
  Serial.println(mesafe);
 
  if(Serial.available() ){
  veri = Serial.read();
  Serial.println(veri);
 
  }
else if(mesafe <= 10){
     analogWrite(sagm,125);
  digitalWrite(sag_ileri,LOW);
  digitalWrite(sag_geri,HIGH);
  analogWrite(solm,125);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,HIGH);
    delay(500);
    analogWrite(sagm,100);
    digitalWrite(sag_ileri,HIGH);
  digitalWrite(sag_geri,LOW);
  analogWrite(solm,100);
  digitalWrite(sol_ileri,LOW);
  digitalWrite(sol_geri,HIGH);
    delay(500);
}
  else if (mesafe > 10){
  analogWrite(sagm,125);
   digitalWrite(sag_ileri,HIGH);
  digitalWrite(sag_geri,LOW);
  analogWrite(solm,125);
  digitalWrite(sol_ileri,HIGH);
  digitalWrite(sol_geri,LOW);
 }
 

}


  
  }
