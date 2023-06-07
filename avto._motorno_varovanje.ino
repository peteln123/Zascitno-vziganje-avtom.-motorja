int stikalo = 0;
int skrivno_stikalo = 0;
int senzor_M = 0;
#define kontakt 5

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  stikalo = digitalRead(3);
  skrivno_stikalo = digitalRead(2);
  senzor_M = digitalRead(4);

  if (stikalo == HIGH && skrivno_stikalo == HIGH && senzor_M == LOW)
  {
    digitalWrite(kontakt, LOW);
  }
  else
  {
    digitalWrite(kontakt, HIGH);
    if (senzor_M == HIGH && skrivno_stikalo == HIGH && stikalo == HIGH)
    {
      digitalWrite(kontakt, HIGH);
    }
  }
}
