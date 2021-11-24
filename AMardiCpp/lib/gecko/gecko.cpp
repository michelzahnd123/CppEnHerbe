#include <Arduino.h>
#include "gecko.h"

Gecko::Gecko() {
   Serial.println("Hello!");
}

Gecko::Gecko(String name){
   Serial.print("Hello!");
   Serial.println(name);
}