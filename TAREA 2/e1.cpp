//declaro variables
const int potenciometro= A0;
//los leds siempre se conectan a Pin PWM (actuador analogico)
const int ledBlanco=3;
const int ledNaranja=6;
//guardar los valores
int reading=0;
int intensidad=0;

void setup(){
  //inicializacion del puerto serial
  Serial.begin(9600);
  pinMode(potenciometro,INPUT);
  pinMode(ledBlanco,OUTPUT);
  pinMode(ledNaranja,OUTPUT);
}

void loop(){
  //para el potenciometro
  reading=analogRead(potenciometro);
  //0-1023 son los valores que lee o devuelve un sensor analog.
  //0-255 son los valores que emite el actuador 
  
  intensidad=map(reading,0,1023,0,255);
  analogWrite(ledBlanco,intensidad);
  analogWrite(ledNaranja,255-intensidad);
  delay(500);
}
