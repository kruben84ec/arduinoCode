
void setup() {
  //siempre se debe iniciaalizar los pines que vamos a usar
  pinMode(13, OUTPUT);  
}

void loop(){
  //enciende el pin 13 y lo apaga durante un segundo
  digitalWrite(13, HIGH);//entrega 5 voltios
  delay(1000);//se detiene por un 1 segundo
  digitalWrite(13, LOW);//apaga 0
  delay(1000);//se apga por un segundo
}
