#include <Arduino.h>

#ifndef GECKO_H
#define GECKO_H

class Gecko{
private:
    String name;
public:
    Gecko();
    Gecko(String name);
    String getName();
};

#endif