
static const uint8_t dd   = D5;


void setup() {
  pinMode(dd, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(dd, LOW);   // Turn the LED on (Note that LOW is the voltage level
                                    // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(600);                      // Wait for a second
  digitalWrite(dd, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(500);                      // Wait for two seconds (to demonstrate the active low LED)
}
