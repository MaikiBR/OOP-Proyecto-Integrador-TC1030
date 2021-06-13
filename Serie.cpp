#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include "Serie.h"

using namespace std;

Serie::Serie():Video(){
    this->episodios = new Episodio[1]; 
    this->nepisodios = 0;
    this->numTemps = 0.0;
}

Serie::Serie(string _ID, string _nombreVideo, string _tipoVideo, string _genero, Episodio *episodios, int nepisodios, int _anioLanzamiento, int _duracion, int numTemps):Video(_ID, _nombreVideo, _tipoVideo, _genero, _anioLanzamiento, _duracion){
    this->episodios = episodios;
    this->nepisodios = nepisodios;
    this->numTemps = numTemps;
}

void Serie::calificaSerie(float _calif, float _calif2){
  cout<<"La serie tiene "<<numTemps<<" temporadas."<<endl;
  for(int i=0; i<this->numTemps; i++){
    calificacion = (_calif + _calif2)/2;
  }
}

void Serie::muestraDatosS(){
  cout << "\nNombre de la Serie: "<< nombreVideo << endl;
  cout << "Tipo de Video: " << tipoVideo << endl;
  cout << "ID: " << ID << endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificacion de la Serie: " << calificacion << endl;
  cout << "Anio de lanzamiento: " << anioLanzamiento << endl;
  cout << "Duracion de la serie: " << duracion << " temporadas" << endl;
  for(int i=0; i<this->nepisodios; i++){
      episodios[i].muestraDatosEp();
  }
}
