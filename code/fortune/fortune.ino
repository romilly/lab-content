

// created by Romilly Cocking
// http://www.rareschool.com
// and placed in the public domain

const int NUMBER_OF_COOKIES = 4;
char *greetings[NUMBER_OF_COOKIES] = {"These", "are", "some", "strings"};
int index = 0;

void setup() {
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
  // print the string when a newline arrives:
 while (Serial.available()) {
    // get the next input character:
    char c = (char) Serial.read();
    // if it's a newline send the next cookie back
    if (c == '\n') {
      Serial.println(greetings[index++]);
      // if that was the last cookie, start again with the first one
      if (index == NUMBER_OF_COOKIES) {
        index = 0;
      }
    }
  }
}



