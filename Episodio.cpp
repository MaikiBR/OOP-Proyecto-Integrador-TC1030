#include <iostream>
#include <fstream>
#include "Episodio.h"

using namespace std;

Episodio::Episodio(){
  this->numeroTemp = 0;
  this->numeroEp = 0;
  this->nombreEp = "Episodio sin nombre";
  this->duracionEp = 0;
}

Episodio::Episodio(int _numeroTemp, int _numeroEp, string _nombreEp, int _duracionEp){
  this->numeroTemp = _numeroTemp;
  this->numeroEp = _numeroEp;
  this->nombreEp = _nombreEp;
  this->duracionEp = _duracionEp;
}

void Episodio::setnumeroTemp(int _numeroTemp){
    numeroTemp = _numeroTemp;
}

void Episodio::setnumeroEp(int _numeroEp){
    numeroEp = _numeroEp;
}

void Episodio::setnombreEp(string _nombreEp){
    nombreEp = _nombreEp;
}
void Episodio::setduracionEp(int _duracionEp){
    duracionEp = _duracionEp;
}
  
int Episodio::getnumeroTemp(){return this->numeroTemp;}
int Episodio::getnumeroEp(){return this->numeroEp;}
string Episodio::getnombreEp(){return this->nombreEp;}
int Episodio::getduracionEp(){return this->duracionEp;}
  
void Episodio::muestraDatosEp(){
  cout << "----------------------------------------------" << endl;
  cout << "Numero de temporada: " << numeroTemp << endl;
  cout << "Numero de episodio: " << numeroEp << endl;
  cout << "Nombre de episodio: " << nombreEp << endl;
  cout << "Duracion de episodio: " << duracionEp << " minutos" << endl;
}


