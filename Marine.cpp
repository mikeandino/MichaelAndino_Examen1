#include "Marine.h"

Marine::Marine(int px, int py, string pcolor):Pieza(px,py,pcolor){
}

Pieza*** Marine::Mover(Pieza*** tabla){
  cout << "Marine" << '\n';
  return tabla;
}

Marine::~Marine(){
}
