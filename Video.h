#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <fstream>

using namespace std;

class Video{
  protected:
    string ID, nombreVideo, tipoVideo, genero;
    float calificacion;
    int anioLanzamiento, duracion;
  public:
    Video();
    Video(string, string, string, string, int, int);
