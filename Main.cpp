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

  vector <Cancion*> lista_can;
  vector <Playlist*> lista_pl;
  vector <Radio*> lista_rad;
  vector <Artista*> lista_art;

  //canciones
  int vecesCanciones = 0;
  string titCan = "";
  string genCan = "";
  int durCan = 0;
  int posCan = 0;

  //Radio
  string titRad ="";
  string genRad ="";
  int opRep = 0;
  int posRad = 0;

  //playlist
  string titPl="";
  string descriPl="";
  int posPl = 0;

  //Artista
  string titArt="";
  int vecesArt = 0;
  int posArt = 0;
  do{
    cout<<"--------------EJPOTIFAI--------------\n"
    <<"1. Crear Cancion\n"
    <<"2. Crear Artista\n"
    <<"3. Crear Playlist\n"
    <<"4. Crear Radio\n"
    <<"5. Reproducir\n"
    <<"6. Agregar cancion a artista\n"
    <<"7. Agregar cancion a playlist\n"
    <<"8. Agregar cancion a radio\n"
    <<"9. Salir\n"
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
        lista_can.push_back(new Cancion(titCan,genCan,durCan,vecesCanciones));
        cout<<"Cancion registrada! "<<endl;
      }break;

      case 2:{
        //crear artista
        cout<<"Ingrese el nombre del artista: "<<endl;
        cin>>titArt;

      }break;

      case 3:{
        //crear playlist

        cout<<"Ingrese el Titulo de Playlist"<<endl;
        cin>> titPl;
        cout<<"Ingrese descripcion"<<endl;
        cin>> descriPl;
        //lista Canciones
        for(int i = 0; i < lista_can.size();i++){
          cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
        }
      }break;

      case 4:{
        //Crear radio
        cout<<"Ingrese el Titulo"<<endl;
        cin>>titRad;
        cout<<"Ingrese el Genero"<<endl;
        cin>> genRad;

        //lista Canciones
        for(int i = 0; i < lista_can.size();i++){
          cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
        }
      }break;

      case 5:{
        //Reproducir
        cout<<"1. Cancion\n"
        <<"2. Playlist\n"
        <<"3. Artista\n"
        <<"4. Radio\n";
        cin>>opRep;
        switch (opRep) {
          case 1:{
            for(int i = 0; i < lista_can.size();i++){
              cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
            }
          }break;

          case 2:{
            for(int i = 0; i < lista_pl.size();i++){
              cout<<i<<") "<<lista_pl.at(i)->getNombre()<<endl;
            }
          }break;

          case 3:{
            for(int i = 0; i < lista_art.size();i++){
              cout<<i<<") "<<lista_art.at(i)->getNombre()<<endl;
            }
          }break;

          case 4:{
            for(int i = 0; i < lista_rad.size();i++){
              cout<<i<<") "<<lista_rad.at(i)->getNombre()<<endl;
            }
          }break;

          default:
            cout<<"No selecciono nada"<<endl;
        }
      }break;

      case 6:{
        //lista artista
        cout<<"Ingrese # de artista: "<<endl;
          for(int i = 0; i < lista_art.size();i++){
            cout<<i<<") "<<lista_art.at(i)->getNombre()<<endl;
          }
          cin>>posArt;

        cout<<"Ingrese # de cancion para agregar al artista: "<<endl;
          for(int i = 0; i < lista_can.size();i++){
            cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
          }
          cin>>posCan;

      }break;

      case 7:{
        //lista playlist
        cout<<"Ingrese # de playlist: "<<endl;
          for(int i = 0; i < lista_pl.size();i++){
            cout<<i<<") "<<lista_pl.at(i)->getNombre()<<endl;
          }
          cin>>posPl;

        cout<<"Ingrese # de cancion para agregar a playlist: "<<endl;
          for(int i = 0; i < lista_can.size();i++){
            cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
          }
          cin>>posCan;

      }break;

      case 8:{
        //lista radio
        cout<<"Ingrese # de estacion de radio: "<<endl;
          for(int i = 0; i < lista_rad.size();i++){
            cout<<i<<") "<<lista_rad.at(i)->getNombre()<<endl;
          }
          cin>>posRad;

        cout<<"Ingrese # de cancion para agregar a la radio: "<<endl;
          for(int i = 0; i < lista_can.size();i++){
            cout<<i<<") "<<lista_can.at(i)->getTitulo()<<endl;
          }
          cin>>posCan;



      }break;
      default:
        cout<<"Saliendo..."<<endl;
        op = 9;
    }
  }while (op != 9);
  return 0;
}
