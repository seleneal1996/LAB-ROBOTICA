const int LED1 =13;
const int LED2 =12;
const int BOTON = 7;
int val = 0; //val se emplea para almacenar el estado del boton
int state = 0; // 0 LED apagado, mientras que 1 encendido
int old_val = 0; // almacena el antiguo valor de val
void setup(){  // definir si la variable es de entrada // o salida.
 pinMode(LED1,OUTPUT); // establecer que el pin digital es una senal de salida
 pinMode(LED2,OUTPUT); 
 pinMode(BOTON,INPUT); // y BOTON como senal de entrada
}
void loop() {       // loop = realice un lazo continuamente
val= digitalRead(BOTON); // lee el estado del Boton
if ((val == HIGH) && (old_val == LOW)){
state=1-state;
delay(10);
}
old_val = val; // valor del antiguo estado
if (state==1){
 digitalWrite(LED1, HIGH); // enciende el LED
 digitalWrite (LED2, LOW);
}
else{
 digitalWrite(LED1,LOW); // apagar el LED
 digitalWrite (LED2, HIGH); 
}
}