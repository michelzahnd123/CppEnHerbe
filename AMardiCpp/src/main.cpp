#include <Arduino.h>
#include "Gecko.h"//correction clement : impotation de Gecko.h

void setup() {
    Serial.begin(115200);             // initialisation du moniteur

    Serial.println("\nEx1:");         // fin exercice 1 par clément
    
    Gecko arthur();                   // instance de Gecko nomée arthur (c'est le nom de ma variable)
      //le constructeur qui est appele pour la creer affiche hello sur le moniteur serie
    Gecko benjy();                    // c'est pareil pour benjy
    

    Serial.println("\nEx2:");         // au début de chaque exercice pour voir mieux ou l'on se trouve dans la sortie série
                                      // \n = retour a la ligne

}

void loop() {
                                      // rien a faire en boucle
}
