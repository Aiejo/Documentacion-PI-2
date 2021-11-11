void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Iniciando proceso");
pinMode(53,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()){
  char data = Serial.read();
  Serial.println("Dato Recibido");
  Serial.println(data);
  if (data=='a'){
    digitalWrite(53,HIGH);
  }else if (data=='b'){
    digitalWrite(53,LOW);
  }else if (data=='c'){
    while (!Serial.available()){ //Mientras no se le envíen datos Serial.available es False
    digitalWrite(53,HIGH);
    delay(200);
    digitalWrite(53,LOW);
    delay(200);
    }
  }
}
}
