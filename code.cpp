const int T_Do = 262;
const int T_Re = 294;
const int T_Mi = 330;
const int T_Fa = 349;
const int T_Sol = 392;
const int T_La = 440;
const int T_Si = 493

const int Do = 10;
const int Re = 9;
const int Mi = 8;
const int Fa = 7;
const int Sol = 6;
const int La = 5;
const int Si = 4;

const int Buzz = 11;
const int LED = 13;

void setup()
{
  pinMode(Do, INPUT);
  dgitalWrite(Do,HIGH);
  
  pinMode(Re, INPUT);
  dgitalWrite(Re,HIGH);
  
  pinMode(Mi, INPUT);
  dgitalWrite(Mi,HIGH);
  
  pinMode(Fa, INPUT);
  dgitalWrite(Fa,HIGH);
  
  pinMode(Sol, INPUT);
  dgitalWrite(Sol,HIGH);
  
  pinMode(La, INPUT);
  dgitalWrite(Si,HIGH);
  
  pinMode(Si, INPUT);
  dgitalWrite(Si,HIGH);
  
  pinMode(LED, OUTPUT);
  dgitalWrite(LED,LOW);  
}

void loop()
{
  while(digitalRead(Do) == LOW)
  {
    tone(Buzz, T_Do);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(Re) == LOW)
  {
    tone(Buzz, T_Re);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(Mi) == LOW)
  {
    tone(Buzz, T_Mi);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(Fa) == LOW)
  {
    tone(Buzz, T_Fa);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(Sol) == LOW)
  {
    tone(Buzz, T_Sol);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(La) == LOW)
  {
    tone(Buzz, T_La);
    digitalWrite(LED, HIGH);  
  }
  
  while(digitalRead(Si) == LOW)
  {
    tone(Buzz, T_Si);
    digitalWrite(LED, HIGH);  
  }
  noTone(Buzz);
  digitalWrite(LED, LOW);
}
