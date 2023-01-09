// Robo India Tutorial 
// Digital Input and Output on LED 
// Hardware: NodeMCU
#define D0 16 //r-g(NodeMcu -  chip)
#define D1 5  //g-r
#define D2 4  //b-b
/*const int RED = 5;
const int GREEN = 4;
const int BLUE = 0;*/
const int d=0;
void setup() {
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  
}

void loop() { 
  analogWrite(D0, 10);    //the pin will generate a steady rectangular wave of the specified duty cycle until the next call to analogWrite() (or a call to digitalRead() or digitalWrite()) on the same pin.
  analogWrite(D0, 50);
  analogWrite(D2, 200); 
    delay(10);
 /* analogWrite(RED, 100);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 100); */
 }
