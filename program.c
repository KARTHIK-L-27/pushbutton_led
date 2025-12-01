#define LED 13
#define BUTTON 2

void setup() {
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);  // Button uses internal pull-up resistor
}

void loop() {
    int buttonState = digitalRead(BUTTON);

    if (buttonState == LOW) {  
        // Button pressed (because INPUT_PULLUP gives LOW when pressed)
        digitalWrite(LED, HIGH);
        delay(200);
        digitalWrite(LED, LOW);
        delay(200);
    } 
    else {
        // Button not pressed → LED off
        digitalWrite(LED, LOW);
    }
}
