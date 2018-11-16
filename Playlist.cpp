#include "Playlist.h"
#include "Cancion.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

Playlist::Playlist(){

}

Playlist::Playlist(string name,string descrip){
  nombre = name;
  descripcion = descrip;
}

void Playlist::setNombre(string _nombre){
  nombre = _nombre;
}
void Playlist::setDescripcion(string _descripcion){
  descripcion = _descripcion;
}
void Playlist::setLista(vector<Cancion*> list){
  lista = list;
}
string Playlist::getNombre(){
  return nombre;
}
string Playlist::getDescripcion(){
  return descripcion;
}
vector<Cancion*> Playlist::getLista(){
  return lista;
}

void Playlist::addLista(Cancion* can){
  lista.push_back(can);
}
