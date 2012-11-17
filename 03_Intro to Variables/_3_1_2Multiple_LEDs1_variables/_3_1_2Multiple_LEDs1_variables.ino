/*
  Blink- modified from example to blink seven LED's.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Texas Instruments University Microcontrollers- Larissa Swanland
 */


//VARIABLE DECLARING- GLOBAL (these will run through the entire program)
//no variables at this time
int t= 500; //sets time between blinks


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
  delay(t);              // wait for a second
  digitalWrite(3, LOW);    // set the LED off
  delay(t);              // wait for a second
                    //repeat for all of the other LED's 3-9
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(4,LOW);
  delay(t);
  digitalWrite(6,HIGH); //to be LED C now
  delay(t);
  digitalWrite(6,LOW);
  delay(t);
  digitalWrite(5,HIGH); //to LED D now
  delay(t);
  digitalWrite(5,LOW); 
  delay(t);
  digitalWrite(8,HIGH); //to be LED E now
  delay(t);
  digitalWrite(8,LOW);
  delay(t);
   digitalWrite(7,HIGH); // to be LED F now
  delay(t);
  digitalWrite(7,LOW);
  delay(t);
  digitalWrite(9,HIGH);
  delay(t);
  digitalWrite(9,LOW);
  delay(t);
}

