const int LED1 =13;
const int LED2 =12;
const int LED3 =2;
const int BOTON = 7;
int val = 0; 
int state = 0; 
int old_val = 0;
void setup(){ 
 pinMode(LED1,OUTPUT);  
 pinMode(LED2,OUTPUT); 
 pinMode(LED3,OUTPUT);
 pinMode(BOTON,INPUT); 
}
void loop() {       
val= digitalRead(BOTON); 
if ((val == HIGH) && (old_val == LOW)){
state=1-state;
delay(10);
}
old_val = val; 
if (state==1){
 digitalWrite(LED1, HIGH); // enciende
 digitalWrite(LED2, LOW); // apaga
 digitalWrite(LED3, LOW); // apaga
 delay(500);
 digitalWrite(LED1, LOW);   
 digitalWrite(LED2, HIGH); 
 digitalWrite(LED3, LOW); 
 delay(500); 
 digitalWrite(LED1, LOW); 
 digitalWrite(LED2, LOW); 
 digitalWrite(LED3, HIGH); 
 delay(500);
}
}