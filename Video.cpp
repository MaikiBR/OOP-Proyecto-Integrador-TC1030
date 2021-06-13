#include "Video.h"
#include <iostream>
#include <fstream>
using namespace std;

Video::Video(){
  this->ID = "Sin-ID";
  this->nombreVideo = "Sin nombre";
  this->tipoVideo = "Sin tipo";
  this->genero = "Sin genero";
  this->calificacion = 0.0;
  this->anioLanzamiento = 0;
  this->duracion = 0;
}
