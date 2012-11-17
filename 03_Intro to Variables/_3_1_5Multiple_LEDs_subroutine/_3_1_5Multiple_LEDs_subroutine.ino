/*
  Blink- modified from example to blink seven LED's.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Texas Instruments University Microcontrollers- Larissa Swanland
 */


//VARIABLE DECLARING- GLOBAL (these will run through the entire program)

int t= 100; //sets time between blinks
int t2=70;
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
void loop() { //this is the routine
  turnoffall();
  blinkinorder();
  turnonall();
  turnoffall();
  backwards();
  turnoffall();
 flicker();
 turnoffall();
 scan();
 turnoffall();
 scanback();
turnoffall();
evens();
turnoffall();
odds();
turnoffall();
scan();
turnoffall();
scanback();
turnoffall();
blinkinorder();
turnoffall();
backwards();
turnoffall();
evens();
odds();
turnoffall();
evens();
turnoffall();
odds();
turnoffall();
scan();
scanback();
turnoffall();
scan();
scanback();
turnoffall();
odds();
turnoffall();
evens();
turnoffall();
odds();
turnoffall();
}
  
 void blinkinorder(){ 
 LEDa(); //blink LEDa on then off
 LEDb();
 LEDc();
 LEDd();
 LEDe();
 LEDf();
 LEDg();
}

 void backwards(){ 
 LEDg(); //blink LEDa on then off
 LEDf();
 LEDe();
 LEDd();
 LEDc();
 LEDb();
 LEDa();
}
void odds(){
  ona();
  onc();
  one();
  ong();
}

void evens(){
  onb();
  ond();
  onf();
}

void flicker(){
 ona(); //blink LEDa on then off
 ong();
 turnoffall();
 onb();
 onf();
 turnoffall();
 onc();
 one();
 turnoffall();
 ond();
}

void scan(){
  ona();
  delay(70);
  onb();
  delay(80);
  onc();
  delay(90);
  ond();
  delay(100);
  one();
  delay(110);
  onf();
  delay(120);
  ong();
  delay(130);
  turnoffall();
}

void scanback(){
  ong();
  delay(70);
  onf();
  delay(80);
  one();
  delay(90);
  ond();
  delay(100);
  onc();
  delay(110);
  onb();
  delay(120);
  ona();
  delay(130);
  turnoffall();
}
 
 //this block will turn on the LED's on-LED name
  void ona(){
  digitalWrite(a, HIGH);   // set the LED on
  delay(t2);   
  }
  void onb(){
  digitalWrite(b, HIGH);   // set the LED on
  delay(t2);  
  } 
  void onc(){
  digitalWrite(c, HIGH);   // set the LED on
  delay(t2); 
  }  
  void ond(){
  digitalWrite(d, HIGH);   // set the LED on
  delay(t2);   
  }
  void one(){
  digitalWrite(e, HIGH);   // set the LED on
  delay(t2); 
  }
void onf(){
  digitalWrite(f, HIGH);   // set the LED on
  delay(t2);     
}
void ong(){
  digitalWrite(g, HIGH);   // set the LED on
  delay(t2); 
}


//this block will blink the LED's individually

void LEDa(){
  digitalWrite(a, HIGH);   // set the LED on
  delay(t);              // wait 
  digitalWrite(a, LOW);    // set the LED off
  delay(t);              // wait 
                    //repeat for all of the other LED's 3-9
}

void LEDb (){
  digitalWrite(b,HIGH);
  delay(t);
  digitalWrite(b,LOW);
  delay(t);
}

void LEDc (){
  digitalWrite(c,HIGH); 
  delay(t);
  digitalWrite(c,LOW);
  delay(t);
}

void LEDd(){
  digitalWrite(d,HIGH); 
  delay(t);
  digitalWrite(d,LOW); 
  delay(t);
}

void LEDe(){
  digitalWrite(e,HIGH); 
  delay(t);
  digitalWrite(e,LOW);
  delay(t);
}
void LEDf(){
   digitalWrite(f,HIGH); 
  delay(t);
  digitalWrite(f,LOW);
  delay(t);
}
void LEDg(){
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
  delay(10);
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
  

