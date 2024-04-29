//Mayrene Colmenares
//Ejercicio 16: Secuencia de luces de emergencia
//• Simula luces de emergencia con los LEDs, donde led1 y led2
//parpadean alternativamente en un patrón rápido, mientras que 
//led3 y led4 lo hacen en un patrón más lento

#include <Arduino.h>

// Definición de pines para los LEDs
const int led1 = 18;
const int led2 = 5;
const int led3 = 17;
const int led4 = 16;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Parpadeo rápido para led1 y led2
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(100); // Pequeña pausa
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(100); // Pequeña pausa

  // Parpadeo más lento para led3 y led4
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(500); // Pausa más larga
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(500); // Pausa más larga
}
