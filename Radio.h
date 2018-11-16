#ifndef RADIO_H
#define RADIO_H
#include "Cancion.h"
#include <vector>

using std::vector;
using std::string;

class Radio{
  private:
    string nombre;
    string genero;
    vector <Cancion*> lista;

  public:
    Radio();

    ~Radio();
    Radio(string,string);
    void setNombre(string);
    void setGenero(string);
    void setLista(vector<Cancion*>);

    string getNombre();
    string getGenero();
    vector<Cancion*> getLista();

    void addLista(Cancion*);
};

#endif
