#include "Artista.h"
#include "Cancion.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

Artista::Artista(){

}

Artista::Artista(string name,int times){
  nombre = name;
  veces = times;
}

void Artista::setNombre(string _nombre){
  nombre = _nombre;
}
void Artista::setVeces(int _veces){
  veces = _veces;
}
void Artista::setLista(vector<Cancion*> list){
  lista = list;
}
string Artista::getNombre(){
  return nombre;
}
int Artista::getVeces(){
  return veces;
}
vector<Cancion*> Artista::getLista(){
  return lista;
}
void Artista::addLista(Cancion can){
    lista.push_back(new Cancion());
}
