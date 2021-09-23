#define poten A5
#define led1 2
#define led2 3 

int valor_p;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valor_p = analogRead(poten);
  Serial.println(valor_p);
  
  //led 1
  if (valor_p > 511)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2,LOW);
  }
  //led 2
   else if (valor_p < 511)
  {
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
  }
  else{
    digitalWrite(led2,HIGH);
    digitalWrite(led1, HIGH);
  }
  delay(300);
}