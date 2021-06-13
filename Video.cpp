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

Video::Video(string _ID, string _nombreVideo, string _tipoVideo, string _genero, int _anioLanzamiento, int _duracion){
  this->ID = _ID;
  this->nombreVideo = _nombreVideo;
  this->tipoVideo = _tipoVideo;
  this->genero = _genero;
  this->calificacion = 0;
  this->anioLanzamiento = _anioLanzamiento;
  this->duracion = _duracion;
}
