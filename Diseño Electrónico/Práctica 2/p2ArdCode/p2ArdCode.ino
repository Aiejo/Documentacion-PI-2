#define m1D 5
#define m1I 6
#define m1V 9
#define m2D 8
#define m2I 7
#define m2V 10
#define p1 2
#define p2 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(p1,INPUT);
pinMode(p2,INPUT);
pinMode(m1D,OUTPUT);
pinMode(m1I,OUTPUT);
pinMode(m1V,OUTPUT);
pinMode(m2D,OUTPUT);
pinMode(m2I,OUTPUT);
pinMode(m2V,OUTPUT);


  
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(p1)==0){
  digitalWrite(m1I,HIGH);
  digitalWrite(m1D,LOW);
  analogWrite(m1V,100);

  digitalWrite(m2I,LOW);
  digitalWrite(m2D,HIGH);
  analogWrite(m2V,100);
  
  Serial.println("1");
}else{
  digitalWrite(m1D,HIGH);
  digitalWrite(m1I,LOW);
  analogWrite(m1V,100);

    digitalWrite(m2D,LOW);
  digitalWrite(m2I,HIGH);
  analogWrite(m2V,100);
  
   Serial.println("2");
}
}
