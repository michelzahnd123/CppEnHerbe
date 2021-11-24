#include <Arduino.h>
#include "gecko.h"

void setup() {
  Serial.begin(115200);

  Serial.println("\nEx1:");
  Gecko arthur1;
  Gecko benjy1;

  Serial.println("\nEx2:");
  Gecko arthur2("arthur");        //on donne le nom test au constructeur de arthur2
  Gecko benjy2;
  Serial.println(arthur2.name);
  Serial.println(benjy2.name);
  Serial.println("\nEx3:");
}

void loop() {
// rien a faire en boucle
}
