int valueR = 0;
int valueG = 0;
int valueB = 0;
  
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  valueR = analogRead(A0);
  valueG = analogRead(A1);
  valueB = analogRead(A2);
    
  analogWrite(10, map(valueB, 0, 1023, 0, 255));
  analogWrite(11, map(valueR, 0, 1023, 0, 255));
  analogWrite(9, map(valueG, 0, 1023, 0, 255));
  
  delay(1000); 
}