/*
  Blink- modified from example to blink seven LED's.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Texas Instruments University Microcontrollers- Larissa Swanland
 */


//VARIABLE DECLARING- GLOBAL (these will run through the entire program)
//no variables at this time


void setup() {                
  // initialize the digital pin outputs.
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
}

//this is the main program
void loop() {
  digitalWrite(3, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(3, LOW);    // set the LED off
  delay(1000);              // wait for a second
                    //repeat for all of the other LED's 3-9
  
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
  
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  
  
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
  
  
  
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}

