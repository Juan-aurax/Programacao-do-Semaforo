// C++ code

int vermelho = 2;
int amarelo = 3;
int verde = 4;
  
void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  //Vermelho
    digitalWrite(vermelho, HIGH);
    delay(1500);
  digitalWrite(vermelho,LOW);
    
  //Amarelo
    digitalWrite(amarelo, HIGH);
    delay(1500);
    digitalWrite(amarelo, LOW);
  
  //Verde
    digitalWrite(verde, HIGH);
    delay(1500);
    digitalWrite(verde, LOW);
}
