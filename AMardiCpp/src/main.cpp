#include <Arduino.h>
#include "gecko.h"

void setup() {
  Serial.begin(115200);

  Serial.println("\nEx1:");
  Gecko arthur1;
  Gecko benjy1;

  Serial.println("\nEx2:");
  Serial.println("\nEx3:");
  Gecko arthur2("arthur");
  Gecko benjy2;
  Serial.println(arthur2.getName());
  Serial.println(benjy2.getName());

  Serial.println("\nEx4:");
  
}

void loop() {
// rien a faire en boucle
}
