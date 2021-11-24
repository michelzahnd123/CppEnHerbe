#include <Arduino.h>
#include "gecko2.h"

Gecko2::Gecko2(char* name){
    Serial.print("Hello! ");
    Serial.println(name);
}
