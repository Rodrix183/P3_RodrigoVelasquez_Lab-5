#ifndef CANCION_H
#define CANCION_H
#include <string>

using std::string;

class Cancion{
    private:
      string titulo;
      string genero;
      int duracion;
      int veces;
    public:
      Cancion();

      ~Cancion();
      Cancion(string,string,int,int);

      string getTitulo();
      string getGenero();
      int getDuracion();
      int getVeces();

      void setTitulo(string);
      void setGenero(string);
      void setDuracion(int);
      void setVeces(int);
};

#endif
