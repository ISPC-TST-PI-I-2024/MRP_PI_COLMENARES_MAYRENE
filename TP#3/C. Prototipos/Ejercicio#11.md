#include <Arduino.h>

// Definición de pines para los Dip Switches y los LEDs
const int sw1_1 = 13;
const int sw1_2 = 12;
const int sw1_3 = 14;
const int sw1_4 = 27;

const int led1 = 18;
const int led2 = 5;
const int led3 = 17;
const int led4 = 16;
const int led5 = 4;
const int led6 = 0;
const int led7 = 2;
const int led8 = 15;

void setup() {
  pinMode(sw1_1, INPUT);
  pinMode(sw1_2, INPUT);
  pinMode(sw1_3, INPUT);
  pinMode(sw1_4, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
  // Lee el estado de los Dip Switches
  int state1 = digitalRead(sw1_1);
  int state2 = digitalRead(sw1_2);
  int state3 = digitalRead(sw1_3);
  int state4 = digitalRead(sw1_4);

  // Establece el patrón de parpadeo según los estados de los Dip Switches
  if (state1 == LOW) {
    digitalWrite(led1, HIGH); // Enciende LED1
  } else {
    digitalWrite(led1, LOW); // Apaga LED1
  }

  if (state2 == LOW) {
    digitalWrite(led2, HIGH); // Enciende LED2
  } else {
    digitalWrite(led2, LOW); // Apaga LED2
  }

  if (state3 == LOW) {
    digitalWrite(led3, HIGH); // Enciende LED3
  } else {
    digitalWrite(led3, LOW); // Apaga LED3
  }

  if (state4 == LOW) {
    digitalWrite(led4, HIGH); // Enciende LED4
    digitalWrite(led5, HIGH); // Enciende LED5
    digitalWrite(led6, HIGH); // Enciende LED6
    digitalWrite(led7, HIGH); // Enciende LED7
    digitalWrite(led8, HIGH); // Enciende LED8
  } else {
    digitalWrite(led4, LOW); // Apaga LED4
    digitalWrite(led5, LOW); // Apaga LED5
    digitalWrite(led6, LOW); // Apaga LED6
    digitalWrite(led7, LOW); // Apaga LED7
    digitalWrite(led8, LOW); // Apaga LED8
  }
}
