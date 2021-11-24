#include <Arduino.h>
#include "gecko.h"

Gecko::Gecko() {
   this-> name="unknown";
   Serial.println("Hello!");
   Serial.println(name);
   }

Gecko::Gecko(String name){
   this->name=name;
   Serial.println("Hello " + name + "!");
   Serial.println(name);
   }