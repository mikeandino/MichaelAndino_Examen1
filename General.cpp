#include "General.h"

General::General(int px, int py, string pcolor):Pieza(px,py,pcolor){
}

Pieza*** General::Mover(Pieza*** tabla){
  cout << "General" << '\n';
  return tabla;
}

General::~General(){
}
