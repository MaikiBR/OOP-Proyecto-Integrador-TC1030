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

    void setID(string);
    void setnombreVideo(string);
    void settipoVideo(string);
    void setgenero(string);
    void setcalificacion(float);
    void setanioLanzamiento(int);
    void setduracion(int);
