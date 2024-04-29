#include <Arduino.h>

// Definición de pines para los botones y los LEDs
const int btn1 = 34;
const int btn2 = 39;
const int btn3 = 36;
const int led1 = 18;
const int led2 = 5;

bool correctSequence = false; // Indica si se ingresó la secuencia correcta

void setup() {
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Verifica la secuencia de botones
  if (digitalRead(btn1) == LOW && digitalRead(btn2) == LOW && digitalRead(btn3) == HIGH) {
    correctSequence = true;
  } else {
    correctSequence = false;
  }

  // Controla los LEDs según la secuencia
  if (correctSequence) {
    digitalWrite(led1, HIGH); // Secuencia correcta: enciende LED1
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led1, LOW); // Secuencia incorrecta: enciende LED2
    digitalWrite(led2, HIGH);
  }
}
