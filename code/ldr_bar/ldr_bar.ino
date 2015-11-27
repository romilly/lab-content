
#define BIT_COUNT 8
int led_pins[BIT_COUNT] = {2, 3, 4, 5, 6, 7, 8, 9};
const int analogInPin = A5;
int sensorValue = 0;
int outputValue = 0;

void setup() {
  for (int i = 0; i < BIT_COUNT; i++) {
    pinMode(led_pins[i], OUTPUT);
  }
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 160, 600, 8, 0);
  // change the analog out value:
 // analogWrite(analogOutPin, outputValue);           

  // print the results to the serial monitor:
  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(outputValue);   

  for (int i = 0; i < 8; i++) {
    if (outputValue > i) {
      digitalWrite(led_pins[i], HIGH);
    } else {
      digitalWrite(led_pins[i], LOW);
    }
  }
  delay(100);                     
}
