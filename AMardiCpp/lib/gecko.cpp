#include <Arduino.h>
#include "gecko.h"

int Gecko::nouvelle_creation=0;

void afficher(){
    int nouvelle_creation=nouvelle_creation+1;
    printf("%s","Hello");
}
