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
   int age=getAge();
   switch (age) {
   case 0:{
      Serial.println("Unborn Gecko");
      break;}
   case 1:
   case 2:{
      Serial.println("Baby Gecko");
      break;}
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:{
      Serial.println("Adult Gecko");
      break;}
   case 11:
   case 12:
   case 13:{
      Serial.println("Old Gecko");
      break;}
   default:{
      Serial.println("Impossible Gecko");
      break;}    
   }
