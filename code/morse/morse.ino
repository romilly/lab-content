/* 

 This example code is in the public domain.
 
 adapted from
 http://www.arduino.cc/en/Tutorial/SerialEvent
 and
 http://arduino.cc/en/Tutorial/Blink
 
*/


String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

// Length of a dot in milliseconds
#define DIT 200

/*

Codes for Morse Coder
---------------------

The codes are strings representing the characters
including the alphabet, the digits from 0-9, and
sp,e punctuation.

The codes are stored as an array of strings,
indexed by the ASCII value of the character they represent.

ASCII characters that have no Morse code equivalent
are converted to *

Space is special.
It is converted to a string containing a single space.

*/

char *codes[127] = {
"*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*"," ","*",".-..-.","*","*","*","*","*","*","*","*",".-.-.","--..--","-....-",".-.-.-","-..-.","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.","---...","-.-.-.","*","-...-","-.--.","..--..",".--.-.",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*",".-...","*","...-.-"
};

char *morse(char input) {
  return codes[input];
}

// Add code to define which LED to use here


void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  // Add code to initialise LED pin as output here
}

void transmit(char *ascii_text) {
  int i = 0;
  Serial.print(ascii_text);
  while (ascii_text[i] != 0) {
    char c = ascii_text[i];
    switch (c) {
      case '*':
        break;
      case '.':
        on(1);
        break;
      case '-':
        on(3);
        break;
      case ' ':
        off(6);
        Serial.print(" ");
    }
    i++;
    off(1);
  }
  off(2);
  Serial.print(" ");
}

void on(int length) {
  // do something here
    
}

void off(int length) {
  // do something here
  
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    for (int i = 0; i < inputString.length(); i++) {
      transmit(morse(inputString.charAt(i)));
    }
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
}
  
/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */
 
void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read(); 
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    } 
  }
}
  

