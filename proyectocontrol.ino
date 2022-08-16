const int pinLED = 13;

void setup() 
{
   Serial.begin(9600);
   pinMode(pinLED, OUTPUT);
}

void loop()
{
   if (Serial.available()>0) 
   {
      char option = Serial.read();
      if (option == '1')
      {
            digitalWrite(pinLED, HIGH);
            delay(5000);
            digitalWrite(pinLED, LOW);
            //delay(200);
      }
      if (option == '0'){
          digitalWrite(pinLED, LOW);
      }
   }
}
