//This program will send data into from NodeMcu to our System
void setup() {
  Serial.begin(9600); / / Telling braud rate(speed at bhic ddata is transferred
}

void loop() {
  for(int i=0;i<50;i++){
    Serial.println(i);
    delay(500);
  }
}
