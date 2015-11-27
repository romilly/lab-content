#define BIT_COUNT 8

int led_pins[BIT_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < BIT_COUNT; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
}

void loop() {
  for (unsigned int value = 0; value < 256; value++) {
    display(value);
    delay(100); 
  }
}

void display(unsigned int value) {
  for (int i = 0; i < BIT_COUNT; i++) {
       digitalWrite(led_pins[i], value & 1);
       value = value >> 1;
    }
}


