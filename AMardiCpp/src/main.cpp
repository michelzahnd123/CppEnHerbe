#include <Arduino.h>
#inlcude "Gecko.h"//correction clement : impotation de Gecko.h

void setup() {
    Serial.begin(115200); /* initialisation du moniteur*/
    Serial.println("\nEx1:")
    //fin exercice 1 par clément
    Gecko arthur(); //je crée une instance de Gecko nomée arthur (c'est le nom de ma variable)
    //le constructeur qui est appeler pour la crée affiche hello sur le moniteur série
    Gecko benjy(); //c'est pareil pour benjy

    //a vérifier mais je suis pas sur que les "()" sont présente et a leur place faut peut-être les enlever
    
    
    Serial.println("\nEx2:")//je coseil de mettre sa au début de chaque exercice pour voir mieux ou l'on se trouve dans la sortie série
        //\n = retour a la ligne

}

void loop() {
  //rien a faire en boucle
}
