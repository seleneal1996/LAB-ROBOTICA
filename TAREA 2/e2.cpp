const int potenciometro= A0;
int reading=0;
const int potenciometro2=A2;
int reading2=0;

const int ledBlanco=3;
const int ledNaranja=6;
int intensidad=0;
int intensidad2=0;


void setup(){
  
  pinMode(potenciometro,INPUT);
  pinMode(potenciometro2,INPUT);
  pinMode(ledBlanco,OUTPUT);
  pinMode(ledNaranja,OUTPUT);
  Serial.begin(9600);
  Serial.println("POTEN1\tLEDBLANCO\tPOTEN2\tLEDNARANJA");
}

void loop(){
  reading=analogRead(potenciometro);
  reading2=analogRead(potenciometro2);
  //MAPEO 
  intensidad=map(reading,512,1023,0,255);
  intensidad2=map(reading2,1023,512,0,255);
  analogWrite(ledBlanco,255-intensidad);
  analogWrite(ledNaranja,255-intensidad2);
  
  Serial.print(reading);
  Serial.print("\t");
  Serial.print(255-reading);
  Serial.print("\t");
  Serial.print(reading2);
  Serial.print("\t");
  Serial.print(255-reading2);
  Serial.println("\t");
  delay(500);
}