// Robo India Tutorial 
// Digital Input and Output on LED 
// Hardware: NodeMCU
#define D0 16 //r-g(NodeMcu -  chip)
#define D1 5  //g-r
#define D2 4  //b-b
#define d3 0
/*const int RED = 5;
const int GREEN = 4;
const int BLUE = 0;*/
const int d=0;
void setup() {
//  pinMode(d, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  
}

void loop() { 
  //analogWrite(d, 50)
  analogWrite(D0, 10);    
  analogWrite(D0, 50);
  analogWrite(D2, 200);  
  delay (1000);
   analogWrite(D0, 20);
  analogWrite(D0, 60);
  analogWrite(D2, 10); 
  delay (1000);
   analogWrite(D0, 10);
  analogWrite(D0, 80);
  analogWrite(D2, 10); 
  delay (1000);
   analogWrite(D0, 80);
  analogWrite(D0, 200);
  analogWrite(D2, 2400); 
  delay (1000);
   analogWrite(D0, 200);
  analogWrite(D0, 50);
  analogWrite(D2, 200); 
  delay (1000);
   analogWrite(D0, 140);
  analogWrite(D0, 150);
  analogWrite(D2, 100); 
 /* analogWrite(RED, 100);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 100); */
 // delay (1000);
}
