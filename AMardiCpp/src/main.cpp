#include <Arduino.h>
#include "gecko.h"

void setup() {
  Serial.begin(115200);             // initialisation du moniteur

  Serial.println("\nEx1:");         // fin exercice 1 (Clément)
/*
  Gecko arthur;                     // instance de Gecko nomée arthur (c'est le nom de ma variable)
    //le constructeur qui est appele pour la creer affiche hello sur le moniteur serie
  Gecko benjy;                      // c'est pareil pour benjy (Clément)
*/
  Serial.println("\nEx2:");         // au début de chaque exercice pour voir mieux ou l'on se trouve dans la sortie série

  Gecko arthur(String name);         // instance de Gecko nomée arthur
                                     //le constructeur affiche hello + name
  Gecko benjy(String name);                    // benjy


  Serial.println("\nEx3:");         // au début de chaque exercice
}

void loop() {
  // rien a faire en boucle
}
