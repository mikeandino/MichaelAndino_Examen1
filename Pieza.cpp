#include "Pieza.h"

  Pieza::Pieza(int px, int py, char pcolor){
      this->x=px;
      this->y=py;
      this->color=pcolor;
  }

Pieza*** Pieza::Mover(Pieza*** tabla) {
    cout << "Mover" << '\n';
    return tabla;
}

Pieza::~Pieza(){

}
