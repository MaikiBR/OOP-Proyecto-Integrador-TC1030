#include <iostream>
#include <fstream>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula():Video(){
}

Pelicula::Pelicula(string _ID, string _nombreVideo, string _tipoVideo, string _genero, int _anioLanzamiento, int _duracion):Video(_ID,_nombreVideo,_tipoVideo,_genero,_anioLanzamiento,_duracion){
}
