#include <Arduino.h>

// Definición de pines para los botones y los LEDs
const int btn1 = 34;
const int btn2 = 39;
const int led1 = 18;
const int led2 = 5;

bool lastBtn1State = HIGH; // Estado anterior del btn1
bool lastBtn2State = HIGH; // Estado anterior del btn2

void setup() {
  pinMode(btn1, INPUT_PULLUP); // Configura btn1 como entrada con resistencia pull-up
  pinMode(btn2, INPUT_PULLUP); // Configura btn2 como entrada con resistencia pull-up
  pinMode(led1, OUTPUT); // Configura LED1 como salida
  pinMode(led2, OUTPUT); // Configura LED2 como salida
}

void loop() {
  // Lee el estado actual de los botones
  int btn1State = digitalRead(btn1);
  int btn2State = digitalRead(btn2);

  // Controla el estado de LED1
  if (btn1State != lastBtn1State) {
    lastBtn1State = btn1State;
    if (btn1State == LOW) {
      digitalWrite(led1, !digitalRead(led1)); // Cambia el estado de LED1
    }
  }

  // Controla el estado de LED2
  if (btn2State != lastBtn2State) {
    lastBtn2State = btn2State;
    if (btn2State == LOW) {
      digitalWrite(led2, !digitalRead(led2)); // Cambia el estado de LED2
    }
  }
}
