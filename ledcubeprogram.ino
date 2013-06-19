void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  
  
  
}

void loop() {
  while(true){
for(int b=8; b<=12; b+=2){
  digitalWrite(b, HIGH);
for(int i=2; i<=6; i+=2){
  digitalWrite(i, HIGH);
  delay(400);
  for(int z=2; z<=12; z+=2){
    digitalWrite(z, LOW);
}
}
}

  /*
for(int i=2; i<=6; i+=2){
  digitalWrite(i, HIGH);
  for(int b=8; b<=12; b+=2){
    delay(250);
  digitalWrite(b, LOW);
  for(int j= 12; j>=8; j-=2){
    delay(250);
    digitalWrite(j, HIGH);
    for(int z=6; z>=2; z-=2){
      delay(250);
      digitalWrite(z, LOW);
  }
  }
}
  
  

}
*/
}
}
