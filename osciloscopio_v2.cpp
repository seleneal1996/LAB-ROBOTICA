// C++ code
//
//actuadores
const int led=3;

//0-255   -->valores que puede emitir el microcontrolador para
//señales analogicas (PWM)
//sensores
//0-1023  --> valores que devuelve o lee un sensor analogico
//
const int poten1 = A2;
int lectura_poten1 =0;
const int poten2 =A0;
int lectura_poten2=0;

void setup()
{
	//actuadores -->Sobre los actuadores escribo
  	pinMode(led,OUTPUT);
  	//sensores	 -->De los sensores leo
  	pinMode(poten1,INPUT);
  	pinMode(poten2,INPUT);
  	//inicializacion del puerto serial
  	Serial.begin(9600);
  	Serial.println("POTEN1\tPOTEN2");
}

void loop()
{
  lectura_poten1=analogRead(poten1);
  lectura_poten2=analogRead(poten2);
  Serial.print(lectura_poten1);
  Serial.print("\t");
  Serial.println(lectura_poten2);
  delay(200);
}

//conectar 2 leds relacionados a un poten, si el poten esta en 0 un led estará
 // en su mx intensidad y el otro en la minima y viceversa
  
  
/*
sensores: leemos
	-digitales: digitalRead:0/1 HIGH/LOW :pines->todos
    -analogicos:analogRead:0-1023:pines -> A0-A5
actuadores: escribimos
	-digitales: digitalWrite: 0/1 HIGH/LOW :pines->todos
    -analogicos:analogWrite:0-255:pines->PWM 


*/
