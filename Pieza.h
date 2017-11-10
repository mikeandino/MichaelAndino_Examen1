#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pieza{
protected:
    int x;
    int y;
    string color;
public:
    Pieza(int, int, string);
    virtual Pieza*** Mover(Pieza***);
    virtual ~Pieza();
};
