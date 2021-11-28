#include <Arduino.h>
#include "gecko.h"

void setup() {
  Serial.begin(115200);

  Serial.println("\nEx1:");
  Gecko arthur1;
  Gecko benjy1;

  Serial.println("\nEx2:");
  Serial.println("\nEx3:");
  Gecko arthur2("Arthur");
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
  Gecko arthur5("mimi");
  arthur5.hello("Titi");
  arthur5.hello(2);

Serial.println("\nEx6:");
  Gecko arthur6("momo",3);
  arthur6.eat("meat");
  arthur6.eat("MEAT");
  arthur6.eat("vegetable");
  arthur6.eat("VEGETABLE");
  arthur6.eat("coca");

Serial.println("\nEx7:");
  Gecko arthur7("alain",5);
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();
  arthur7.work();

}

void loop() {
  // rien a faire en boucle
}

