#include "Marine.h"

Marine::Marine(int px, int py, char pcolor):Pieza(px,py,pcolor){
}
/* condition */
Pieza*** Marine::Mover(Pieza*** tabla){
  bool mover = false;
  do {
    if (color='b') {
      cout << "Elija donde se desea mover: " << '\n'
           << "1. A la esquina izquierda superior"
           << "2. A la esquina derecha superior"
           << "Ingrese una opcion: ";
           int opcion;
           cin>>opcion;
           while (opcion<1||opcion>2) {
             cout << "Opcion Invalido: " << '\n';
             cin>>opcion;
           }
           if (opcion==1) {


           }else{

           }
    }else{
      cout << "Elija donde se desea mover: " << '\n'
           << "1. A la esquina izquierda superior"
           << "2. A la esquina derecha superior"
           << "Ingrese una opcion: ";
           int opcion;
           cin>>opcion;
           while (opcion<1||opcion>2) {
             cout << "Opcion Invalido: " << '\n';
             cin>>opcion;
           }

    }
  } while(!mover);
  return tabla;
}

Marine::~Marine(){
}
