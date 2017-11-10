#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pieza{
public:
    int x;
    int y;
    char color;
public:
    Pieza(int, int, char);
    virtual Pieza*** Mover(Pieza***);
    virtual ~Pieza();
};
