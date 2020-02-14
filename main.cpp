// Arduino code
#include <Arduino.h>

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
    Serial.println("Welcome to Arduino on Mbed OS");
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("LED is now on!");
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("LED is now off!");
    delay(1000);
}

// Mbed OS code
int main() {
    setup();
    while (1) loop();
}

