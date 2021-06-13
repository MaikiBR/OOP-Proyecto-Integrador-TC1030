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
  
  // Definicion de series y sus episodios
  Episodio ESerie1T1E1(1,1,"Witchbottle",25);
  Episodio ESerie1T1E2(1,2,"Necropolis",23);
  Episodio ESerie1T2E1(2,1,"War Council",25);
  Episodio ESerie1T2E2(2,2,"Old Homes",25);
  Episodio * episodios = new Episodio[4];
  episodios[0] = ESerie1T1E1;
  episodios[1] = ESerie1T1E2;
  episodios[2] = ESerie1T2E1;
  episodios[3] = ESerie1T2E2;
  Serie Serie1("VIDS-1-2021", "Castlevania", "Serie", "Accion-aventura", episodios, 4, 2017, 2, 2);

  Episodio ESerie2T1E1(1,1,"Chapter One: The Mandalorian",40);
  Episodio ESerie2T1E2(1,2,"Chapter Two: The Child",45);
  Episodio ESerie2T2E1(2,1,"Chapter Nine: The Marshal",45);
  Episodio ESerie2T2E2(2,2,"Chapter Ten: The Passenger",40);
  Episodio * episodios2 = new Episodio[4];
  episodios2[0] = ESerie2T1E1;
  episodios2[1] = ESerie2T1E2;
  episodios2[2] = ESerie2T2E1;
  episodios2[3] = ESerie2T2E2;
  Serie Serie2("VIDS-2-2021", "The Mandalorian", "Serie", "Space western", episodios2, 4, 2019, 2, 2);

}
