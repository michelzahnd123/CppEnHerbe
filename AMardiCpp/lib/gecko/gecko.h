#include <Arduino.h>

#ifndef GECKO_H
#define GECKO_H

class Gecko{
private:
    String name;
    int age;
public:
    Gecko();
    Gecko(String name);
    Gecko(String name, int age);
    String getName();
    int getAge();
    int setAge(int age);
    String status();
};

#endif