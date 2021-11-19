
#define m1A 12
#define m1B 11
#define m2A 10
#define m2B 9

const int vel = 500;

void setup() {
  Serial.begin(9600);
  pinMode(m1A, OUTPUT);
  pinMode(m1B, OUTPUT);
  pinMode(m2A, OUTPUT);
  pinMode(m2B, OUTPUT);
}


void loop() {
  if(Serial.available()){
    char bt=Serial.read();
    if(bt == 'a') {
      digitalWrite(m1A, LOW);
      digitalWrite(m1B, LOW);
      digitalWrite(m2A, LOW);
      digitalWrite(m2B, LOW);
      Serial.println('a');
    }
   if(bt== 'b'){
      digitalWrite(m1A, HIGH);
      digitalWrite(m1B, LOW);
      digitalWrite(m2A, HIGH);
      digitalWrite(m2B, LOW);
      Serial.println('b');
    }if(bt== 'c'){
      digitalWrite(m1A, LOW);
      digitalWrite(m1B, HIGH);
      digitalWrite(m2A, LOW);
      digitalWrite(m2B, HIGH);
      Serial.println('c');
    }
  }
} 
