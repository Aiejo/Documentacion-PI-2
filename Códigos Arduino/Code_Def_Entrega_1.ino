#define botonF 2
#define botonA 3
#define ledF 12
#define ledA 13
#define buzzer 4
#define m1A 8
#define m1B 7
#define m2A 6
#define m2B 5
#define m1E 10
#define m2E 9

const int vel = 100;

void setup() {
  pinMode(botonF, INPUT);
  pinMode(botonA, INPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(buzzer, OUTPUT);
  analogWrite(m1E, vel);
  analogWrite(m2E, vel);
}

void girarMotores(String giro){
  if(giro == "Parar") {
    digitalWrite(m1A, LOW);
    digitalWrite(m1B, LOW);
    digitalWrite(m2A, LOW);
    digitalWrite(m2B, LOW);
  }else if(giro== "Frente"){
    digitalWrite(m1A, HIGH);
    digitalWrite(m1B, LOW);
    digitalWrite(m2A, HIGH);
    digitalWrite(m2B, LOW);
  }else{
    digitalWrite(m1A, LOW);
    digitalWrite(m1B, HIGH);
    digitalWrite(m2A, LOW);
    digitalWrite(m2B, HIGH);
  }
}

void estadoBotones(){
  delay(50);
  if(digitalRead(botonF)==1){
    if(digitalRead(botonA)==1){
      digitalWrite(ledF, HIGH);
      digitalWrite(ledA, HIGH);
      girarMotores("Parar");
    }else{
      digitalWrite(ledF, HIGH);
      digitalWrite(ledA, LOW);
      girarMotores("Frente");
    }
  }else if(digitalRead(botonA)==1){
    if(digitalRead(botonF)==1){
      digitalWrite(ledF, HIGH);
      digitalWrite(ledA, HIGH);
      girarMotores("Parar");
    }else{
      digitalWrite(ledF, LOW);
      digitalWrite(ledA, HIGH);
      girarMotores("Atras");
    }
  }
}
boolean first = true;
void loop() {
  while((digitalRead(botonF) == 0 && digitalRead(botonA) == 0) && first){
    digitalWrite(ledF, HIGH);
    digitalWrite(ledA, HIGH);
  }
  first = false;
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,200);
  delay(200);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,293.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,440,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(100);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(300);
  estadoBotones();
  tone(buzzer,440,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(100);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(400);
  estadoBotones();
  tone(buzzer,440,100);
  delay(100);
  estadoBotones();
  tone(buzzer,523.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(100);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(200);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(200);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(100);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,932.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,932.33,100);
  delay(200);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(100);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(300);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(100);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(200);
  estadoBotones();
  tone(buzzer,783.99,100);
  delay(200);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(300);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(200);
  estadoBotones();
  tone(buzzer,698.45,100);
  delay(100);
  estadoBotones();
  tone(buzzer,587.33,100);
  delay(100);
  estadoBotones();
  tone(buzzer,659.25,100);
  delay(400);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(300);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(400);
  estadoBotones();
  tone(buzzer,880,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1046.50,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1760,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1864.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1864.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1760,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1760,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(300);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1760,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(300);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1108.73,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1318.51,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1567.98,100);
  delay(200);
  estadoBotones();
  tone(buzzer,1760,300);
  delay(400);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  tone(buzzer,880,300);
  delay(600);
  estadoBotones();
  tone(buzzer,1864.66,300);
  delay(400);
  estadoBotones();
  tone(buzzer,1396.91,100);
  delay(100);
  estadoBotones();
  tone(buzzer,1174.66,100);
  delay(100);
  estadoBotones();
  
}
