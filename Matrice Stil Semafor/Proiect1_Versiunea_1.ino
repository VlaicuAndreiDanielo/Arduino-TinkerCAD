
int animationSpeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  animationSpeed = 1000;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationSpeed);
  digitalWrite(12, HIGH);
  delay(animationSpeed);
  digitalWrite(11, HIGH);
  delay(animationSpeed);
  digitalWrite(10, HIGH);
  delay(animationSpeed);
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationSpeed);
  digitalWrite(12, LOW);
  delay(animationSpeed);
  digitalWrite(11, LOW);
  delay(animationSpeed);
  digitalWrite(10, LOW);
  delay(animationSpeed); 
  
  
}