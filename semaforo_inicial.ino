// C++ code

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  //Vermelho
  digitalWrite(2, HIGH);
  delay(1500);
  digitalWrite(2,LOW);
    
  //Amarelo
    digitalWrite(3, HIGH);
     delay(1500);
    digitalWrite(3, LOW);
  
  //Verde
    digitalWrite(4, HIGH);
    delay(1500);
    digitalWrite(4, LOW);
}
