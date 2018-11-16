#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include "Cancion.h"
#include <string>
using std::vector;
using std::string;

class Playlist{
  private:
    string nombre;
    string descripcion;
    vector<Cancion*> lista;
  public:
    Playlist();

    ~Playlist();
    Playlist(string,string);

    string getNombre();
    string getDescripcion();
    vector<Cancion*> getLista();

    void setNombre(string);
    void setDescripcion(string);
    void setLista(vector<Cancion*>);

    void addLista(Cancion*);
};

#endif
