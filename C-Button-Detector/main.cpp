#include <iostream>
#include <wiringPi.h>

#define OUTPUT_PIN  0
#define INPUT_PIN   7
#define ON          1
#define OFF         0

int main() {
    bool button_pressed = false;

    wiringPiSetup();

    pinMode(OUTPUT_PIN, OUTPUT);
    pinMode(INPUT_PIN, INPUT);

    digitalWrite(OUTPUT_PIN, ON);

    do {
        button_pressed = digitalRead(INPUT_PIN);
    } while (!button_pressed);
}