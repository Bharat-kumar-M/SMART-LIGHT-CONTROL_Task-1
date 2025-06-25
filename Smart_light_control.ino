int a=0;
void setup(){
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
  	a=Serial.parseInt();
    if(a==1){
      digitalWrite(7,1);
    }
    else if(a==0){
      digitalWrite(7,0);
    }
    Serial.println(a);
  }
}