const int LED1 =13;
const int LED2 =12;
const int BOTON = 7;
int val = 0; 
int state = 0; 
int old_val = 0;
void setup(){ 
 pinMode(LED1,OUTPUT);  
 pinMode(LED2,OUTPUT); 
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
  digitalWrite(LED1, HIGH);   
  digitalWrite(LED2, HIGH);
  delay(500);                      
  digitalWrite(LED1, LOW);    
  digitalWrite(LED2, LOW);
  delay(500);
}
}