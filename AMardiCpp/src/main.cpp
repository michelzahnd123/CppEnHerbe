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
  Gecko arthur4("arthur", 0);
  arthur4.status();
  arthur4.setAge(1);
  arthur4.status();
  arthur4.setAge(3);
  arthur4.status();
  arthur4.setAge(12);
  arthur4.status();
  arthur4.setAge(51);
  arthur4.status();


  Serial.println("\nEx5:");
  Gecko arthur5("arthur");
  arthur5.hello(3);
  arthur5.hello(true);
  arthur5.hello("michel");





}

void loop() {
  // rien a faire en boucle
}

