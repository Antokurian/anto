const int trigpin=9;
const int echopin=10;
float duration,distance;
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
 
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(100);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);
  distance=(duration*.0343)/2;
  Serial.print("Distance:");
  Serial.println(distance);
  delay(100);
  
  
  // put your main code here, to run repeatedly:

}