#include <Arduino.h>
#include "gecko.h"
#include <string.h>

Gecko::Gecko() {
   this->name = "Unknown";
   Serial.println("Hello!");
}

Gecko::Gecko(String name) {
   this->name = name;
   Serial.println("Hello " + name + "!");
}

Gecko::Gecko(String name, int age) {
   this->name = name;
   this->age = age;
   Serial.println("Hello " + name + "! I am " + age + " years old.");
}

String Gecko::getName() {
   return this->name;
}

int Gecko::getAge() {
   return this->age;
}

void Gecko::setAge(int age) {
   this->age = age;
}

void Gecko::status() {
   switch (this->age) {
   case 0:
      Serial.println("Unborn Gecko");
      break;
   case 1:
   case 2:
      Serial.println("Baby Gecko");
      break;
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:
      Serial.println("Adult Gecko");
      break;
   case 11:
   case 12:
   case 13:
      Serial.println("Old Gecko");
      break;
   default:
      Serial.println("Impossible Gecko");
      break;
   }
}

void Gecko::hello(String string) {
   Serial.println("Hello " + string + ", I'm " + this->name + " !");
}

void Gecko::hello(int nombre) {
   for(int i = 0; i < nombre; i++) {
      Serial.println("Hello, I'm " + this->name + " !");
   }
}

void Gecko::eat(String repas){
   if ((getEat(repas))=="MEAT")
   {
      Serial.println("Yummy!");
      setEnergy(getEnergy()+10);
   }
   else
   {
      if ((getEat(repas))=="VEGETABLE"){
         Serial.println("Erk!");
         setEnergy(getEnergy()-10);}
      else{
         Serial.println("I can't eat this!");}
   }
}

String Gecko::getEat(String repas){
   return this->repas;
   }

void Gecko::setEat(String repas) {
   this->repas.toUpperCase();
   }

int Gecko::getEnergy(){
   return this->energy;
   }

void Gecko::setEnergy(int energy){
   this->energy=energy;
   }
