/*control robot de 2 motores seguidor de linea*/

int pin1_1 = 11;
int pin1_2 = 12;
int enable1 = 10;

int enable2 = 9;
int pin2_1 = 8;
int pin2_2 = 7;

int valorSensorIZQ;
int valorSensorDER;
int valorSensorMITAD;

const int umbral = 90;
const int rapidez = 140;

void setup() {
  // 
  Serial.begin(115200);
  inicializacion();
  velocidad(rapidez);
}

void loop() {
  //
  //derecha();
  //delay(2000);
  //izquierda();
  //delay(2000);
  //adelante();
  //delay(1500);
  //derecha();
  //delay(2000);
  //izquierda();
  //delay(2000);
  //atras();
  //delay(1500);
  
  valorSensorIZQ = analogRead(A0);
  Serial.print("\nS1:");
  Serial.println(valorSensorIZQ);
  valorSensorDER = analogRead(A1);
  Serial.print("S2:");
  Serial.println(valorSensorDER);
  valorSensorMITAD = analogRead(A2);
  Serial.print("S3:");
  Serial.println(valorSensorMITAD);
  
  if(valorSensorMITAD < umbral){
    adelante();
    if(valorSensorIZQ < umbral)
      giro_izquierda(rapidez);
    else if(valorSensorDER < umbral)
      giro_derecha(rapidez);
  }else{
    if(valorSensorIZQ < umbral){
      izquierda();
    }
    if(valorSensorDER < umbral){
      derecha();
    }
  }
  
  delay(100);
}
