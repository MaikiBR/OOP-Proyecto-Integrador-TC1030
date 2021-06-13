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

void Video::setID(string _ID){
    ID = _ID;
}

void Video::setnombreVideo(string _nombreVideo){
    nombreVideo = _nombreVideo;
}

void Video::settipoVideo(string _tipoVideo){
    tipoVideo = _tipoVideo;
}

void Video::setgenero(string _genero){
    genero = _genero;
}

void Video::setcalificacion(float _calificacion){
    calificacion = _calificacion;
}

void Video::setanioLanzamiento(int _anioLanzamiento){
    anioLanzamiento = _anioLanzamiento;
}

void Video::setduracion(int _duracion){
    duracion = _duracion;
}

string Video::getID(){return this->ID;}
string Video::getnombreVideo(){return this->nombreVideo;}
string Video::gettipoVideo(){return this->tipoVideo;}
string Video::getgenero(){return this->genero;}
float Video::getcalificacion(){return this->calificacion;}
int Video::getanioLanzamiento(){return this->anioLanzamiento;}
int Video::getduracion(){return this->duracion;}

float Video::operator + (float calif){
  return this->calificaVideo(calif);
}

float Video::calificaVideo(float _calificacion){
    calificacion = _calificacion;
    cout<<"Calificacion asignada"<<endl;
    return calificacion;
}

