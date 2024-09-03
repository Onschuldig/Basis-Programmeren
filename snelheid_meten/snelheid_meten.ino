void setup() {
  // put your setup code here, to run once:
pinMode(outputPin, OUTPUT); 
  pinMode(inputPin, INPUT);  
  digitalWrite(outputPin, HIGH); 
  attachInterrupt(digitalPinToInterrupt(inputPin), countPulses, RISING); 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("m/s:" + String(int(pulseCount) / 6 * 24 * 2.54));

  pulseCount = 0;

  delay(1000); 

}
void countPulses() {
  pulseCount++; 
}