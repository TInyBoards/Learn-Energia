/*
  Blink- modified from example to blink seven LED's.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Texas Instruments University Microcontrollers- Larissa Swanland
 */


//VARIABLE DECLARING- GLOBAL (these will run through the entire program)

int t= 500; //sets time between blinks
int a=3; //LED A
int b=4; //LED B
int c=5; //LED C
int d=6; //LED D
int e=7; //LED E
int f=8; //LED F
int g=9; //LED G

void setup() {                
  // initialize the digital pin outputs.
  pinMode(a, OUTPUT);  //refers to Pin 3
  pinMode(b, OUTPUT);  //Pin 4
  pinMode(c, OUTPUT);  //Pin 5
  pinMode(d, OUTPUT);  //Pin 6
  pinMode(e, OUTPUT);  //Pin 7
  pinMode(f, OUTPUT);  //Pin 8
  pinMode(g, OUTPUT);  //Pin 9
}

//this is the main program
void loop() {
  turnoffall();//run routine that turns off all of the LED's
  blinkinorder();
  turnonall();// run routine that turns on all of the LED's at once
}

void blinkinorder(){ //turns old program into sub routine
  digitalWrite(a, HIGH);   // set the LED on
  delay(t);          
  digitalWrite(a, LOW);    // set the LED off
  delay(t);             
  digitalWrite(b,HIGH);
  delay(t);
  digitalWrite(b,LOW);
  delay(t);
  digitalWrite(c,HIGH); 
  delay(t);
  digitalWrite(c,LOW);
  delay(t);
  digitalWrite(d,HIGH); 
  delay(t);
  digitalWrite(d,LOW); 
  delay(t);
  digitalWrite(e,HIGH); 
  delay(t);
  digitalWrite(e,LOW);
  delay(t);
   digitalWrite(f,HIGH); 
  delay(t);
  digitalWrite(f,LOW);
  delay(t);
  digitalWrite(g,HIGH);
  delay(t);
  digitalWrite(g,LOW);
  delay(t);
}

void turnoffall(){ //turn off all of the LED's at once
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);
}
  
void turnonall(){ //turn on all of the LED's at once
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
}
  
