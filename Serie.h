#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episodio.h"

#include <iostream>
#include <fstream>
using namespace std;

class Serie:public Video{
  private:
    Episodio * episodios;
    int nepisodios, numTemps;
  public:
    Serie();
    Serie(string,string,string,string,Episodio *,int,int,int,int);

    void calificaSerie(float,float);
    void muestraDatosS();
};
