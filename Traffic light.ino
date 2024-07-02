// C++ code
//
int LED1=2,LED2=7,LED3=13;
void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(3000);
  digitalWrite(LED1, LOW);
  delay(6000);
  digitalWrite(LED2, HIGH);
  delay(3000);
  digitalWrite(LED2, LOW);
  delay(6000);
  digitalWrite(LED3, HIGH);
  delay(3000);
  digitalWrite(LED3, LOW);
  delay(6000);
}