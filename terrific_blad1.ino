// C++ code
//
// menor que 100 completamente seco //Luz Vermelha
// entre 100 e 250 solo seco // Luz Amarela
// entre 250 e 500 presisa de agua // Luz Amarela
// entre 500 e 750 semi hidratado // Luz Amarela
// entre 750 e 1023 solo completamete  hidratado //Luz Verde


int medidaSensor = A0;

void setup(){
  Serial.begin(9600);
  pinMode(medidaSensor , INPUT);
  pinMode(3 , OUTPUT);
  pinMode(2 , OUTPUT);
  pinMode(5 , OUTPUT);
  
}

void loop(){
  Serial.println(analogRead(medidaSensor));
  delay(500);
  
  if(analogRead(medidaSensor) < 100){
  	Serial.println("Completamente seco");
    digitalWrite(3 , HIGH);
    digitalWrite(2 , LOW);
    digitalWrite(5 , LOW);

  }else if (analogRead(medidaSensor) > 100 && analogRead(medidaSensor) < 250){
  	Serial.println("Solo seco");
    digitalWrite(3 , LOW);
  
  }else if (analogRead(medidaSensor) > 250 && analogRead(medidaSensor) < 500){
    Serial.println("Precisa de água");
    digitalWrite(3 , LOW);
    digitalWrite(2 , HIGH);
    digitalWrite(5 , LOW);
  
  }else if (analogRead(medidaSensor) > 500 && analogRead(medidaSensor) < 750){
    Serial.println("Semi Hidratado");
    digitalWrite(3 , LOW);
    digitalWrite(2 , LOW);
  
  }else{
    Serial.println("Solo completamente Hidratado");
    digitalWrite(3 , LOW);
    digitalWrite(2 , LOW);
    digitalWrite(5 , HIGH);
  }
  
}
                   


  