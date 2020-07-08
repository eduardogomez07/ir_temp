//Más proyectos en http://www.rogerbit.com
//Suscribete en http://www.youtube.com/user/carlosvolt?sub_confirmation=1
//Grupo en Facebook https://www.facebook.com/groups/RogerBit/
int luz =13;//pin 13 arduino
int sensorSonido =2;//pin 2 donde conectaremos el módulo fc-04
int sonido =0;
int var=0;
void setup() {
  Serial.begin(19200);//Velocidad del puerto serial
  pinMode(sensorSonido,INPUT);//configura el pin 2 como entrada
  pinMode(luz, OUTPUT);// configura el pin 13 como salida
}

void loop() {
 var = digitalRead(sensorSonido);// lectura del pin 2 si se detecta un sonido fuerte como un aplauso le asigna un valor verdadero
 if (var == HIGH){//si la condición se cumple enciende el foco
 delay(200);
 digitalWrite(luz, HIGH);//pone el alto el pin 13 que alimenta un módulo relay 
 sonido=sonido+1;//le suma el valor 1 a la variable sonido, si volvemos a apludir el valor será 2
 delay(80);//antirrebote
 }
if(sonido==2){//si el valor de la variable es 2 apaga el foco
delay(200);
 digitalWrite(luz, LOW);//pone en estado LOW el pin número 13
 sonido=0;
  }
 }
