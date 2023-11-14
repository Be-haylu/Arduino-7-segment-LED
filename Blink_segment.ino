/* behaylu*/

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
  // initialize digital pin LED_BUILTIN as an output.
 
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
  //0
  digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(100); 
  //0
  digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(2000); 
  
    //MOOD
  digitalWrite(pinA, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(100); 
 digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(100); 
 digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(100); 
 digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(100); 
   digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(100); 
 digitalWrite(pinA, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(100);
 
  
}
