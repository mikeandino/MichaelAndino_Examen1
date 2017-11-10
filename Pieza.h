#ifndef PIEZA_H
#define PIEZA_H
#include <string>

class Pieza{
public:
    int x;
    int y;
    string color;
    Pieza(int, int, string);
    virtual Pieza*** Mover(Pieza***);
    ~ Pieza();
};
#endif
