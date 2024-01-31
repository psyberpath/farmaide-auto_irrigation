int relay = 3;
int sensor = A0;

void setup() {
  Serial.begin(9600);
  Serial.print('RUNNING');
  pinMode(sensor, INPUT);
  pinMode(relay, OUTPUT);
    
}

void loop() {
  Serial.println(analogRead(sensor));
  
  if(analogRead(sensor) < 700) {
    digitalWrite(relay, HIGH);
  }
  else {
    digitalWrite(relay, LOW);
  }
  
  delay(5000);
    
}
