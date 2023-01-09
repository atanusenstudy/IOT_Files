
#define D3 0  //INPUT OF IR SECSOR (DIGITAL)
#define D2 4  //OUTPUT LIGHT BLUE
//if detect then high that mnas light will glow
void setup() {
  pinMode(D3, INPUT);
  pinMode(D2,OUTPUT);
}

void loop() { 
  int a=digitalRead(D3);
 if(a==1)
    digitalWrite(D2 ,HIGH);
 else
    digitalWrite(D2 ,LOW);
  delay(10);
 }
