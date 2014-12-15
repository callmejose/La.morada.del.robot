
void inicializacion(){
  pinMode(enable1, OUTPUT);
  pinMode(pin1_1, OUTPUT);
  pinMode(pin1_2, OUTPUT);
  
  pinMode(enable2, OUTPUT);
  pinMode(pin2_1, OUTPUT);
  pinMode(pin2_2, OUTPUT); 
}

void velocidad(int rapidez){
  analogWrite(enable1, rapidez);
  analogWrite(enable2, rapidez);
}

void motor_derecho(int direccion, int velocidad){
  analogWrite(enable1, velocidad);
  if(direccion){
    digitalWrite(pin1_1, HIGH);
    digitalWrite(pin1_2, LOW);
  }else{
    digitalWrite(pin1_2, HIGH);
    digitalWrite(pin1_1, LOW);
  }
}

void motor_izquierdo(int direccion, int velocidad){
  analogWrite(enable2, velocidad);
  if(direccion){
    digitalWrite(pin2_1, HIGH);
    digitalWrite(pin2_2, LOW);
  }else{
    digitalWrite(pin2_2, HIGH);
    digitalWrite(pin2_1, LOW);
  }
}

void adelante(){
  digitalWrite(pin1_1, HIGH);
  digitalWrite(pin1_2, LOW);
  
  digitalWrite(pin2_1, HIGH);
  digitalWrite(pin2_2, LOW);
}

void atras(){
  digitalWrite(pin1_2, HIGH);
  digitalWrite(pin1_1, LOW);
  
  digitalWrite(pin2_2, HIGH);
  digitalWrite(pin2_1, LOW);
}

void derecha(){
  digitalWrite(pin1_2, HIGH);
  digitalWrite(pin1_1, LOW);
  
  digitalWrite(pin2_1, HIGH);
  digitalWrite(pin2_2, LOW);
}

void izquierda(){
  digitalWrite(pin1_1, HIGH);
  digitalWrite(pin1_2, LOW);
  
  digitalWrite(pin2_2, HIGH);
  digitalWrite(pin2_1, LOW);
}

void giro_derecha(int rapidez){
  digitalWrite(pin1_2, HIGH);
  digitalWrite(pin1_1, LOW);
  
  digitalWrite(pin2_1, HIGH);
  digitalWrite(pin2_2, LOW);
  
  delay(70000/rapidez);
}

void giro_izquierda(int rapidez){
  digitalWrite(pin1_1, HIGH);
  digitalWrite(pin1_2, LOW);
  
  digitalWrite(pin2_2, HIGH);
  digitalWrite(pin2_1, LOW);
  
  delay(70000/rapidez);
}
