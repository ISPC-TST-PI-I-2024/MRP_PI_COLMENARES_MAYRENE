#include <Arduino.h>

// Definición de pines para el botón y los LEDs
const int btn1 = 34;
const int led1 = 18;
const int led2 = 5;
const int led3 = 17;

int currentLed = 0; // Índice del LED actual en la secuencia

void setup() {
  pinMode(btn1, INPUT_PULLUP); // Configura el botón como entrada con resistencia pull-up
  pinMode(led1, OUTPUT); // Configura LED1 como salida
  pinMode(led2, OUTPUT); // Configura LED2 como salida
  pinMode(led3, OUTPUT); // Configura LED3 como salida
}

void loop() {
  if (digitalRead(btn1) == LOW) { // Si el botón está presionado (LOW)
    // Apaga todos los LEDs
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

    // Enciende el siguiente LED en la secuencia
    currentLed = (currentLed + 1) % 3;
    if (currentLed == 0) {
      digitalWrite(led1, HIGH);
    } else if (currentLed == 1) {
      digitalWrite(led2, HIGH);
    } else {
      digitalWrite(led3, HIGH);
    }

    delay(500); // Pequeña pausa para visualizar la secuencia
  }
}
