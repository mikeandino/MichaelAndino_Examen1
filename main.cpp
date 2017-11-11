#include <iostream>
#include "Pieza.h"
#include "General.h"
#include "Marine.h"
#include <string>

using namespace std;

int main();

string juego();

bool turno(bool,Pieza***);

bool ganador(Pieza***);

Pieza*** creartablero();

void imprimirtabla(Pieza***);

void limpiartablero(Pieza***);

int main() {
  cout << "Examen 1 Laboratorio Programacion 3" << '\n'<<"Presione una Tecla para jugar."<<'\n';
  cin.ignore();
  cout << "El ganador es " << juego() << '\n';
  return 0;
}

string juego(){
  Pieza*** tabla = creartablero();
  string jugador1;
  cout << "Ingrese el nombre del primer jugador: ";
  cin>>jugador1;
  string jugador2;
  cout << "Ingrese el nombre del segundo jugador: ";
  cin>>jugador2;
  if (turno(true,tabla)) {
    return jugador1;
  }else{
    return jugador2;
  }
}

bool turno(bool turnos,Pieza*** tabla){
  do {
    imprimirtabla(tabla);
      if (turnos) {
      cout << "Turno de Jugador 1" << '\n'
          << "Ingrese una posicion: ";
      string posicion;
      cin>>posicion;
      while (posicion.size()!=2) {
        cout << "Prueba 1" << '\n';
        cout << "Posicion invalida: ";/* message */
        cin>>posicion;
      }
      while (((posicion.at(0)<65||posicion.at(0)>72)&&(posicion.at(0)<97||posicion.at(0)>104))||(posicion.at(1)<48||posicion.at(1)>55)) {
        cout << "Posicion invalida: ";
        cin>>posicion;
      }
      int x;
      if ((posicion.at(0)>64&&posicion.at(0)<73)) {/* message */
        x=posicion.at(0)-65;
      }else{
        x=posicion.at(0)-97;
      }
      int y = posicion.at(1)-48;
      if (tabla[y][x]!=NULL) {
        if (tabla[y][x]->color=='n') {
          cout << "Pieza no valido." << '\n';
        }else{
          tabla=tabla[y][x]->Mover(tabla);
          turnos = false;
        }
      }else{
        cout << "Pieza no valido." << '\n';
      }
    }else{
      cout << "Turno de Jugador 2" << '\n'
          << "Ingrese una posicion: ";
          string posicion;
          cin>>posicion;
          while (posicion.size()!=2) {
            cout << "Posicion invalida: ";
            cin>>posicion;
          }
          while (((posicion.at(0)<65||posicion.at(0)>72)&&(posicion.at(0)<97||posicion.at(0)>104))||(posicion.at(1)<48||posicion.at(1)>55)) {
            cout << "Posicion invalida: ";
            cin>>posicion;
          }
          int x;
          if ((posicion.at(0)>64&&posicion.at(0)<73)) {
            x=posicion.at(0)-65;
          }else{
            x=posicion.at(0)-97;
          }
          int y = posicion.at(1)-48;
          if (tabla[y][x]!=NULL) {
            if (tabla[y][x]->color=='b') {
              cout << "Pieza no valido." << '\n';
            }else{
              tabla=tabla[y][x]->Mover(tabla);
              turnos = true;
            }
          }else{
            cout << "Pieza no valido." << '\n';
          }
    }
    cout << '\n';
  } while(!ganador(tabla));
  if (turnos) {
    return true;
  }else{
    return false;
  }
}

bool ganador(Pieza*** tabla){
  bool j1=true;
  bool j2=true;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (tabla[i][j]) {
        if (tabla[i][j]->color=='n') {
          j1=false;
        }else{
          j2=false;
        }
      }
    }
  }
  if (j1||j2) {
    return true;
  }else{
    return false;
  }
}

Pieza*** creartablero(){
  Pieza*** tablero = new Pieza**[8];
  for (int i = 0; i < 8; i++) {
    tablero[i] = new Pieza*[8];
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (i==0&&(j==1||j==3||j==5||j==7)) {
        tablero[i][j]= new Marine(i,j,'n');
      }else if(i==1&&(j==0||j==2||j==4||j==6)){
        tablero[i][j]= new Marine(i,j,'n');
      }else if(i==1&&(j==0||j==2||j==4||j==6)){
        tablero[i][j]= new Marine(i,j,'n');
      }else if(i==5&&(j==0||j==2||j==4||j==6)){
        tablero[i][j]= new Marine(i,j,'b');
      }else if(i==6&&(j==1||j==3||j==5||j==7)){
        tablero[i][j]= new Marine(i,j,'b');
      }else if(i==7&&(j==0||j==2||j==4||j==6)){
        tablero[i][j]= new Marine(i,j,'b');
      }
    }
  }
  return tablero;
}

void imprimirtabla(Pieza*** tabla){
  cout << "   A   B   C   D   E   F   G   H" << '\n';
  for (int i = 0; i < 8; i++) {
    cout << i << " ";
    for (int j = 0; j < 8; j++) {
      if (tabla[i][j]!=NULL) {
        cout << "[";
        if (tabla[i][j]->color=='b') {
          cout << "♦] ";
        }else{
          cout << "♣] ";
        }
      }else{
        cout << "[ ] ";
      }
    }
    std::cout << '\n';
  }
}

void limpiartablero(Pieza*** tablero){
  for (int i = 0; i < 8; i++) {
    delete[] tablero[i];
  }
  delete[] tablero;
}
