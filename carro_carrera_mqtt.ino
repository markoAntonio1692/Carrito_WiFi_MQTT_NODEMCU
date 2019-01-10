#define mt1 
#define mt2
#define mtPWM 
#define md1     D2
#define md2     D3
#define mdPWM   D5

void control(int velocidad, int direccion){
    
}

void setup() {
  pinMode(md1,OUTPUT);
  pinMode(md2,OUTPUT);
  pinMode(mdPWM,OUTPUT);
}

void loop() {
  analogWrite(mdPWM,750);
  digitalWrite(md2,HIGH);
  digitalWrite(md1,LOW);
  
  delay(1000);// put your main code here, to run repeatedly:

}
