#include <Arduino.h>

// Definición de pines para los Dip Switches y el LED
const int sw1_1 = 13;
const int sw1_2 = 12;
const int sw1_3 = 14;
const int led1 = 18;

void setup() {
  pinMode(sw1_1, INPUT);
  pinMode(sw1_2, INPUT);
  pinMode(sw1_3, INPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // Lee el estado de los Dip Switches
  int state1 = digitalRead(sw1_1);
  int state2 = digitalRead(sw1_2);
  int state3 = digitalRead(sw1_3);

  // Calcula el tiempo de parpadeo según los estados de los Dip Switches
  int blinkInterval = 500; // Valor predeterminado (500 ms)
  if (state1 == LOW) {
    blinkInterval = 100; // Velocidad rápida (100 ms)
  } else if (state2 == LOW) {
    blinkInterval = 300; // Velocidad media (300 ms)
  } else if (state3 == LOW) {
    blinkInterval = 700; // Velocidad lenta (700 ms)
  }

  // Enciende y apaga el LED1 con el intervalo calculado
  digitalWrite(led1, HIGH);
  delay(blinkInterval / 2);
  digitalWrite(led1, LOW);
  delay(blinkInterval / 2);
}
