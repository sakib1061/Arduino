int ledPinG = 13;                 
int ledPinR = 12;   
void setup()
{
  pinMode(ledPinG, OUTPUT); 
  pinMode(ledPinR, OUTPUT);
}

void loop()
{
  digitalWrite(ledPinG, HIGH);  
  digitalWrite(ledPinR, LOW);   
  delay(200);    
  digitalWrite(ledPinR, HIGH);   
  digitalWrite(ledPinG, LOW);
  delay(200);

}
