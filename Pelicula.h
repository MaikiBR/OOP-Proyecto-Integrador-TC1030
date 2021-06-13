#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"

#include <iostream>
#include <fstream>
using namespace std;

class Pelicula:public Video{
  public:
    Pelicula();
    Pelicula(string, string, string, string, int, int);
    void muestraDatosP();
};
#endif
