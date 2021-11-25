#include <Arduino.h>
#include "gecko.h"

Gecko::Gecko() {
   this-> name="unknown";
   Serial.println("Hello!");
   }

Gecko::Gecko(String name){
   this->name=name;
   Serial.println("Hello " + name + "!");
   }

Gecko::Gecko(String name, int age){
   this->name=name;
   this->age=age;
   Serial.println("Hello " + name + "!");
   }

String Gecko::getName(){
   return this->name;
   }

int Gecko::getAge(){
   return this->age;
   }

int Gecko::setAge(int age){
   return this->age=age;
   }

String status(){
   this ->age=getAge();
   switch (getAge()) {
   case 0:{
      Serial.println("Unborn Gecko");
      return;
      }
   case (getAge==1 or getAge==2):{
      Serial.println("Baby Gecko");
      return;
      }
   case (getAge>=3 and getAge<=10):{
      Serial.println("Adult Gecko");
      return;
      }
   case (getAge>=11 and getAge<=13):{
      Serial.println("Old Gecko");
      return;
      }
   case (getAge>13):{
      Serial.println("Impossible Gecko");
      return;      
      }
   }
