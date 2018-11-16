#include "Cancion.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Cancion::Cancion(){

}
Cancion::Cancion(string title, string genre, int sec, int times){
  titulo = title;
  genero = genre;
  duracion = sec;
  veces = times;
}

void Cancion::setTitulo(string _titulo){
  titulo = _titulo;
}
void Cancion::setGenero(string _genero){
  genero = _genero;
}
void Cancion::setDuracion(int _duracion){
  duracion = _duracion;
}
void Cancion::setVeces(int _veces){
  veces = _veces;
}
string Cancion::getTitulo(){
  return titulo;
}
string Cancion::getGenero(){
  return genero;
}
int Cancion::getDuracion(){
  return duracion;
}
int Cancion::getVeces(){
  return veces;
}
