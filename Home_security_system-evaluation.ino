const int trigPin=9;
const int echoPin=10;
void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  
  int t=pulseIn(echoPin,HIGH);
  float distance=0.017*t;
  Serial.println(distance);
  
  if(distance<=100)
  {
    digitalWrite(13,HIGH);
   delay(100);
  digitalWrite(13,LOW);
   delay(100);
  }
  else if(distance>100)
  {
  digitalWrite(13,LOW);  
  }
  
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
