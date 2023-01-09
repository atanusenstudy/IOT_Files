void setup(){
  Serial.begin(9600);
  pinMode(8,INPUT); //SET PIN AS INPUT
}

void loop(){
  int detect = analogRead(8);//Read Obstacle status and store
  if(detect == LOW){
    Serial.println("Obstacle Present");
  }
  else{
    Serial.println("All Clear");
  }
  delay(1000);
}
