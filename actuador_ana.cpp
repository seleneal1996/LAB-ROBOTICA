// C++ code
//
//actuadores
const int led=3;

//0-255   -->valores que puede emitir el microcontrolador para
//señales analogicas (PWM)
//sensores
//0-1023  --> valores que devuelve o lee un sensor analogico
//
const int poten = A2;
int lectura_poten =0;

void setup()
{
	//actuadores -->Sobre los actuadores escribo
  	pinMode(led,OUTPUT);
  	//sensores	 -->De los sensores leo
  	pinMode(poten,INPUT);
  	//inicializacion del puerto serial
  	Serial.begin(9600);
}

void loop()
{
  for(int i=0; i<256;i+=10){
    analogWrite(led,i);
    delay(100);
  }
  for(int i=255; i>=0;i-=10){
    analogWrite(led,i);
    delay(100);
  }
}

/*
sensores: leemos
	-digitales: digitalRead:0/1 HIGH/LOW :pines->todos
    -analogicos:analogRead:0-1023:pines -> A0-A5
actuadores: escribimos
	-digitales: digitalWrite: 0/1 HIGH/LOW :pines->todos
    -analogicos:analogWrite:0-255:pines->PWM 


*/
