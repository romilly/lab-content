#define BIT_COUNT 8

int led_pins[BIT_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {                
  for (int i = 0; i < BIT_COUNT; i++) {
    pinMode(led_pins[i], OUTPUT);
  }      
}

void loop() {
  for (byte value = 0; value < 256; value++) {
    display(value);
    delay(100); 
  }
}

// display a value on the LEDs
void display(byte value) {
  for (int i = 0; i < BIT_COUNT; i++) {
       digitalWrite(led_pins[i], bitRead(value, i));
    }
}


