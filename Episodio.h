#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"

#include <iostream>
#include <fstream>
using namespace std;

class Episodio{
  private:
    string nombreEp;
    int numeroTemp, numeroEp, duracionEp;
  public:
    Episodio();
    Episodio(int, int, string, int);
 
    void setnumeroTemp(int);
    void setnumeroEp(int);
    void setnombreEp(string);
    void setduracionEp(int);
  
    int getnumeroTemp();
    int getnumeroEp();
    string getnombreEp();
    int getduracionEp();
  
    void muestraDatosEp();
};
#endif
