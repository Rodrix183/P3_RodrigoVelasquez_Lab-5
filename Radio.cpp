#include "Radio.h"
#include "Cancion.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

Radio::Radio(){

}

Radio::Radio(string name,string genre){
  nombre = name;
  genero = genre;
}

void Radio::setNombre(string n){
  nombre = n;
}
void Radio::setGenero(string g){
  genero = g;
}
void Radio::setLista(vector<Cancion*> list){
  lista = list;
}
string Radio::getNombre(){
  return nombre;
}
string Radio::getGenero(){
  return genero;
}
vector<Cancion*> Radio::getLista(){
  return lista;
}

void Radio::addLista(Cancion* can){
  lista.push_back(can);
}
