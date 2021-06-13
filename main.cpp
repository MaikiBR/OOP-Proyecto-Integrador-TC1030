/*
Team 4:
José Ángel Tobón Salazar A01411655
Miguel Ángel Bermea Rodríguez A01411671
Jesús Eduardo Rodríguez Romero A01411628
Luis Ángel Ramiro Amaro A01411763
Gustavo Luna Muñoz  A01411619
*/

#include <iostream>
#include <fstream>
using namespace std;
#include "Videoteca.h"
//#include "Pelicula.h"
//#include "Serie.h"

int main() {
  // Definicion de peliculas
  Pelicula peli1("VIDP-1-2021", "IT", "Pelicula", "Terror", 2017, 135);
  Pelicula peli2("VIDP-2-2021", "Interestellar", "Pelicula", "Ciencia ficcion", 2014, 169);
  Pelicula peli3("VIDP-3-2021", "Limitless", "Pelicula", "Suspenso", 2011, 105);
  Pelicula peli4("VIDP-4-2021", "Bee Movie", "Pelicula", "Animacion", 2007, 90);
  Pelicula peli5("VIDP-5-2021", "Le Petit Prince", "Pelicula", "Animacion", 2015, 108);
  Pelicula * peliculas = new Pelicula[5];
  peliculas[0] = peli1;
  peliculas[1] = peli2;
  peliculas[2] = peli3;
  peliculas[3] = peli4;
  peliculas[4] = peli5;

  /* Desplegar peliculas
  peli1.muestraDatosP();
  peli2.muestraDatosP();
  peli3.muestraDatosP();
  peli4.muestraDatosP();
  cout << "---------------------------------------------------------"<< endl;*/

}
