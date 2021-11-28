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

void Gecko::eat(String meal){
   meal.toUpperCase();                    // transformation en Majuscules
   if (meal=="MEAT")
   {
      Serial.print("Yummy! ");
      Serial.print(meal);
      Serial.print(" ");
      if(energy<=90){                     // energie maxi 100
         setEnergy(getEnergy()+10);
         Serial.println(energy); 
      }
      else{Serial.println(" Energy : 100");}
   }
   else
   {
      if (meal=="VEGETABLE")
         {
         Serial.print("Erk! ");
         Serial.print(meal);
         Serial.print(" ");
         if(energy>=10){                  // energie mini 0
            setEnergy(getEnergy()-10);
            Serial.println(energy);   
         }
         else{Serial.println(" Energy : 100");}
      }
      else{
         Serial.print("I can't eat this! ");
         Serial.print(meal);
         Serial.print(" ");
         Serial.println(energy);
      }
   }
}

int Gecko::getEnergy(){
   return this->energy;
   }

void Gecko::setEnergy(int energy){
   this->energy=energy;
   }

void Gecko::work(){
   if(getEnergy()>=25){
      Serial.print("I'm working T.T ");
      Serial.println(energy);
      setEnergy(getEnergy()-9);
      }
   else{
      Serial.print("Heyyy I'm too sleepy, better take a nap! ");
      Serial.println(energy);
      setEnergy(getEnergy()+50);
      }
   }