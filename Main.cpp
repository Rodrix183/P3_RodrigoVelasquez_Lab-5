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
  
  return 0;
}
