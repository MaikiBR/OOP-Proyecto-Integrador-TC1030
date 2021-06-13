#ifndef VIDEOTECA_H
#define VIDEOTECA_H

#include "Pelicula.h"
#include "Serie.h"

#include <iostream>
#include <fstream>

using namespace std;

class Videoteca{
  protected:
    Pelicula *peliculas;
    Serie *series;
    int npeliculas, nseries;
  public:
    Videoteca();
    Videoteca(Pelicula *, Serie*, int, int);
        
    void mostrarVideoteca();
};
#endif
