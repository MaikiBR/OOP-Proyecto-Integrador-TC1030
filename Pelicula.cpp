#include <iostream>
#include <fstream>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula():Video(){
}

Pelicula::Pelicula(string _ID, string _nombreVideo, string _tipoVideo, string _genero, int _anioLanzamiento, int _duracion):Video(_ID,_nombreVideo,_tipoVideo,_genero,_anioLanzamiento,_duracion){
}

void Pelicula::muestraDatosP(){
  cout << "\nNombre de la Pelicula: "<< nombreVideo << endl;
  cout << "Tipo de Video: " << tipoVideo << endl;
  cout << "ID: " << ID << endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificacion de la pelicula: " << calificacion << endl;
  cout << "Anio de lanzamiento: " << anioLanzamiento << endl;
  cout << "Duracion: " << duracion << " minutos" << endl;
