#include <Arduino.h>
#include "gecko.h"

void setup() {
  Serial.begin(115200);

  Serial.println("\nEx1:");
  Gecko arthur;
  Gecko benjy;

  Serial.println("\nEx2:");
  Gecko arthur2("test");//on donne le nom test au constructeur de arthur2


  Serial.println("\nEx3:");
}

void loop() {
  // rien a faire en boucle
}
