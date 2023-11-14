/* BEHAYLU
  
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
   D
   
*/


// the setup function runs once when you press reset or power the board

int pinA =2 ;
int pinB = 6;
int pinC = 10;
int pinD = 8;
int pinE = 7;
int pinF = 3;
int pinG = 11;
//int D1 = 9;
//int D2 = 10;
//int D3 = 11;
//int D4 = 12

void setup() {
// initialize digital 
pinMode(pinA, OUTPUT);
pinMode(pinB, OUTPUT);
pinMode(pinC, OUTPUT);
pinMode(pinD, OUTPUT);
pinMode(pinE, OUTPUT);
pinMode(pinF, OUTPUT);
pinMode(pinG, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  for (int i=1;i<=5;++i){
   numzero();
   numone();  
   numtwo();
   numthree();
   numfour();
   numfive();
   numsix();
   numseven();
   numeight();
   numnine();  }
}






//numbers as functions

int numzero(){
    //0
  digitalWrite(pinA, HIGH);  
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(1000); 

}

int numone(){  
  //1
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(1000); }
int numtwo(){
    //2
  digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(1000); 
  }
int numthree(){
     //3
  digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(1000);                    // wait for a second
  }
  int numfour(){
      //4
  
  digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1000);  
  }
  int numfive(){ 
  //5
    digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1000);  
  }
  int numsix(){
        //6
   digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1000); 
  }
  int numseven(){
         //7
  digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(1000);  
  }
  int numeight(){
          //8
   digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1000);  
  }
  int numnine(){
      //9
   digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(1000);  
 
  }
