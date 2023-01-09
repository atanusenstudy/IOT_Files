//This program will take input from computer and control light accordingly 
#define D2 4
void setup() {
  Serial.begin(9600); // Telling braud rate(speed at bhic ddata is transferred
  pinMode(D2,OUTPUT);
  
}

void loop() {
  int j;
  if (Serial.available()>0){
       String s=Serial.readStringUntil('\n');   // Until CR (Carriage Return)   or use ' '
       j=s.toInt();                             //convrt to int
       Serial.println(j);
       analogWrite(D2,j);
  }
  delay(2000);
}
