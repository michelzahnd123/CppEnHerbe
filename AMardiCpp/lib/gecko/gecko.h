#include <Arduino.h>

#ifndef GECKO_H
#define GECKO_H

class Gecko {
private:
    String name;
    int age;
    int energy=100;
    String repas;
public:
    Gecko();
    Gecko(String name);
    Gecko(String name, int age);
    String getName();
    int getAge();
    void setAge(int age);
    void status();
    void hello(String string);
    void hello(int nombre);
    void eat(String string);
    String getEat(String string);
    void setEat(String string);
    int getEnergy();
    void setEnergy(int energy);
};

#endif