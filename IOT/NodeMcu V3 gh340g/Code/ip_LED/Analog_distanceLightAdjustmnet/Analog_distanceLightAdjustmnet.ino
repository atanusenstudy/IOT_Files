//Program to read distance and adjust light accordingly
//If closer then high light
#define D3 0  //INPUT OF IR SECSOR (DIGITAL)
#define D2 4  //OUTPUT LIGHT BLUE
//if detect then high that mnas light will glow
void setup() {
  pinMode(D3, INPUT);
  pinMode(D2,OUTPUT);
}

void loop() { 
  int a=analogRead(D3);//0-1023
  a=a/4;
  analogWrite(D2 ,255-a);//0-255
  delay(10);
 }
