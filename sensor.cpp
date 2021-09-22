// C++ code
//
//actuadores
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
  	
  	//sensores	 -->De los sensores leo
  	pinMode(poten,INPUT);
  	//inicializacion del puerto serial
  	Serial.begin(9600);
}

void loop()
{
 	lectura_poten = analogRead(poten);
  	Serial.println(lectura_poten);
}

/*
sensores: leemos
	-digitales: digitalRead:0/1 HIGH/LOW :pines->todos
    -analogicos:analogRead:0-1023:pines -> A0-A5
actuadores: escribimos
	-digitales: digitalWrite: 0/1 HIGH/LOW :pines->todos
    -analogicos:analogWrite:0-255:pines->PWM 


*/
