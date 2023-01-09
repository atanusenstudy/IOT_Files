//This program will take input from computer and control light accordingly 
#define D2 4
void setup() {
  Serial.begin(9600); // Telling braud rate(speed at bhic ddata is transferred
  pinMode(D2,OUTPUT);
  
}

void loop() {
  int j;
  char c;
  if(Serial.available()){   //Check buffer is empty or not
    
   c=Serial.read();        //Return character
   j=(unsigned int)c;
   if(j==1)
        digitalWrite(D2,HIGH);
    else
        digitalWrite(D2,LOW);
  }
  delay(2000);
}
