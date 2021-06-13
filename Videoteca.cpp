#include "Videoteca.h"

#include <iostream>
#include <fstream>
using namespace std;

Videoteca::Videoteca(){
  this->peliculas = new Pelicula[1];
  this->series = new Serie[1];
  this->npeliculas = 0; 
  this->nseries = 0;
}

Videoteca::Videoteca(Pelicula *peliculas, Serie *series, int npeliculas, int nseries){
  this->peliculas = peliculas;
  this->series = series;
  this->npeliculas = npeliculas; 
  this->nseries = nseries;
}
