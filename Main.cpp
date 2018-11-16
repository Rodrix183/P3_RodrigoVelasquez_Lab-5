#include <iostream>
#include "Artista.h"
#include "Cancion.h"
#include "Radio.h"
#include "Playlist.h"
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(){
  Cancion* song = new Cancion();
  Playlist* play = new Playlist();
  Radio* rad = new Radio();
  Artista* artist = new Artista();
  int op = 0;

  //canciones
  int vecesCanciones = 0;
  string titCan = "";
  string genCan = "";
  int durCan = 0;

  int opRep = 0;
  do{
    cout<<"--------------EJPOTIFAI--------------\n"
    <<"1. Crear Cancion\n"
    <<"2. Crear Artista\n"
    <<"3. Crear Playlist\n"
    <<"4. Reproducir\n"
    <<"5. Salir\n"
    "Ingrese una opcion\n";
    cin>>op;
    switch (op) {
      case 1:{
        //crear Cancion
        cout<<"Ingrese el Titulo"<<endl;
        cin>>titCan;
        cout<<"Ingrese el Genero"<<endl;
        cin>> genCan;
        cout<<"Ingrese el Duracion"<<endl;
        cin>>durCan;
      }break;

      case 2:{

      }break;

      case 3:{

      }break;

      case 4:{
        //Reproducir
        cout<<"1. Cancion\n"
        <<"2. Playlist\n"
        <<"3. Artista\n"
        <<"4. Radio\n";
        cin>>opRep;
        switch (opRep) {
          case 1:{
            
          }break;

          case 2:{

          }break;

          case 3:{

          }break;

          case 4:{

          }break;

          default:
            cout<<"No selecciono nada"<<endl;
        }
      }break;
      default:
        cout<<"Saliendo..."<<endl;
        op = 5;
    }
  }while (op != 5);
  return 0;
}
