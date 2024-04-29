//Mayrene Colmenares
//Ejercicio 8: Uso de dip switches para control de LEDs
//• Lee el estado de los dip switches sw1.1 a sw1.8 y refleja el 
//estado en los led1 a led8.


#include <Arduino.h>

// Definición de pines para los Dip Switches y los LEDs
const int sw1_1 = 13;
const int sw1_2 = 12;
const int sw1_3 = 14;
const int sw1_4 = 27;
const int sw1_5 = 26;
const int sw1_6 = 25;
const int sw1_7 = 33;
const int sw1_8 = 32;

const int led1 = 18;
const int led2 = 5;
const int led3 = 17;
const int led4 = 16;
const int led5 = 4;
const int led6 = 0;
const int led7 = 2;
const int led8 = 15;

void setup() {
  // Configura los pines de los Dip Switches como entradas
  pinMode(sw1_1, INPUT);
  pinMode(sw1_2, INPUT);
  pinMode(sw1_3, INPUT);
  pinMode(sw1_4, INPUT);
  pinMode(sw1_5, INPUT);
  pinMode(sw1_6, INPUT);
  pinMode(sw1_7, INPUT);
  pinMode(sw1_8, INPUT);

  // Configura los pines de los LEDs como salidas
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
  int state5 = digitalRead(sw1_5);
  int state6 = digitalRead(sw1_6);
  int state7 = digitalRead(sw1_7);
  int state8 = digitalRead(sw1_8);

  // Refleja el estado en los LEDs
  digitalWrite(led1, state1);
  digitalWrite(led2, state2);
  digitalWrite(led3, state3);
  digitalWrite(led4, state4);
  digitalWrite(led5, state5);
  digitalWrite(led6, state6);
  digitalWrite(led7, state7);
  digitalWrite(led8, state8);
}
