#ifndef ARTISTA_H
#define ARTISTA_H
#include <vector>
#include "Cancion.h"
#include <string>
using std::vector;
using std::string;

class Artista{
private:
  string nombre;
  int veces;
  vector <Cancion*> lista;

public:
  Artista();

  ~Artista();
  Artista(string,int);
  void setNombre(string);
  void setVeces(int);
  void setLista(vector<Cancion*>);

  string getNombre();
  int getVeces();
  vector<Cancion*> getLista();

  void addLista(Cancion);
};

#endif
