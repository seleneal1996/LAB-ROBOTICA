//declaro variables
const int potenciometro= A0;
const int ledBlanco=3;

int reading=0;
int intensidad=0;

void setup(){
  //inicializacion del puerto serial
  Serial.begin(9600);
  pinMode(potenciometro,INPUT);
  pinMode(ledBlanco,OUTPUT);
}

void loop(){
  //para el potenciometro
  reading=analogRead(potenciometro);
  //0-1023 son los valores que lee o devueleve un sensor analog.
  //0-255 son los valores que emite el actuador 
  intensidad=map(reading,0,1023,0,255);
  Serial.println(reading);
  analogWrite(ledBlanco,intensidad);
  delay(500);
}
