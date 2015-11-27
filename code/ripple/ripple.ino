
int led_pins[8] = {2, 3, 4, 5, 6, 7, 8, 9};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < 8; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
       
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(led_pins[i], HIGH);
    delay(100);
    digitalWrite(led_pins[i], LOW);  
  }
}
