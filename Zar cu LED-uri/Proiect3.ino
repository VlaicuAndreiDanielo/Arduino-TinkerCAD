
int buttonState = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
  
}

void loop()
{
  buttonState = digitalRead(2);
  
  if(buttonState == HIGH)
  {  
      int numarAleator = random(0, 6);

  	if(numarAleator == 0)
  	{
    	digitalWrite(10,HIGH);
 
  	}
   
  	else if(numarAleator == 1)
  	{
    	digitalWrite(12,HIGH);
    	digitalWrite(7,HIGH);
    
  	}
   
  	else if(numarAleator == 2)
  	{
    	digitalWrite(10,HIGH);
    	digitalWrite(12,HIGH);
    	digitalWrite(7,HIGH);
    	
  	}
   
  	else if(numarAleator == 3)
  	{
    	digitalWrite(12,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(13,HIGH);
    	digitalWrite(8,HIGH);
    	
  	}
   
  	else if(numarAleator == 4)
  	{
    	digitalWrite(12,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(13,HIGH);
    	digitalWrite(8,HIGH);
    	digitalWrite(10,HIGH);
     	
  	}
  
  	else if(numarAleator == 5)
  	{
    	digitalWrite(12,HIGH);
    	digitalWrite(9,HIGH);
    	digitalWrite(7,HIGH);
    	digitalWrite(13,HIGH);
    	digitalWrite(8,HIGH);
    	digitalWrite(11,HIGH);
     	
  	}
    delay(5000);
  }
  
    digitalWrite(12,LOW);
    digitalWrite(9,LOW);
    digitalWrite(7,LOW);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
 
}


