//declaro variables
const int potenciometro= A0;
const int ledBlanco=3;

int read=0;
int intesidad=0;

void setup(){
  //inicializacion del puerto serial
  Serial.begin(9600);
  pinMode(potenciometro,INPUT);
  pinMode(ledBlanco,OUTPUT);
}

void loop(){
  //para el potenciometro
  read=analogRead(potenciometro);
  intesidad=map(read,0,1023,0,255);
  Serial.println(read);
  analogRead(ledBlanco,intesidad);
  delay(500);
}
