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
