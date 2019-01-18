int potPin =  A1;
int pwmPin = 11;
int ledPin= 13;

void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(pwmPin, OUTPUT);
 pinMode(potPin, INPUT);
 }

void loop()
{
 float val = (analogRead(potPin) /5);    //read the pot value to 0-255
 analogWrite(pwmPin, val);   // Gives the pwm as the pot value}

  
 if(val>128){
 digitalWrite(ledPin,HIGH);}
 else 
 {
  digitalWrite(ledPin,LOW);
  }
 
}

