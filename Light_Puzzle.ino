
// variable to hold sensor value
int leftSensorValue;
int rightSensorValue;
int leftSensorLow = 1023;
int leftSensorHigh = 0;
int rightSensorLow = 1023;
int rightSensorHigh = 0;

const int ledPin = 13;
const int ledLeft = 7;
const int ledRight = 8;

void setup() {

  Serial.begin(9600);
 
  // Make the LED pin an output and turn it on
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  pinMode(ledPin, OUTPUT);
  // calibrate for the first five seconds after program runs
  
  digitalWrite(ledLeft, LOW);
  digitalWrite(ledRight,LOW);
}


void loop() {
  //read the input from A0 and store it in a variable
  leftSensorValue = analogRead(A0);
  rightSensorValue = analogRead(A1);
  
Serial.print(leftSensorValue);
Serial.print(" ");
Serial.println(rightSensorValue);

  if (leftSensorValue > 550) 
  {
  digitalWrite(ledLeft, HIGH);
  }
  else
  {
  digitalWrite (ledLeft, LOW);
  }  
  
  if (rightSensorValue > 550) 
  {
  digitalWrite(ledRight, HIGH);
  }
  else
  {
  digitalWrite (ledRight, LOW);
  }  

if (leftSensorValue > 550 and rightSensorValue > 550)
{
  digitalWrite(ledPin, HIGH);
  delay (500);
  digitalWrite(ledPin, LOW);
  delay (500);
}
else 
{
  digitalWrite(ledPin, LOW);
}
}

