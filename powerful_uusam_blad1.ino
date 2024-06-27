// C++ code
//
int led1= 13;
int led2= 7;
int led3=4;
  void setup()
  
{
  pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  
  digitalWrite(led3, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
 
} 