#include <iostream>
#include "Cancion.h"
using namespace std;



Cancion::Cancion(){
    titulo = "Cancion Por Defecto";
}

Cancion::Cancion(string titulo) {
    this->titulo = titulo;
}

Cancion::Cancion(string titulo, Tiempo duracion) {
    this->titulo = titulo;
    this->duracion = duracion;
}

Cancion::Cancion(string titulo, Tiempo duracion, Artista artista) {
    this->titulo = titulo;
    this->duracion = duracion;
    this->artista = artista;
}

Cancion::Cancion(string titulo, int minutos, int segundos, string nombreArtista, string procedencia, Genero genero) {
    this->titulo = titulo;
    duracion = Tiempo(minutos, segundos);
    artista = Artista(nombreArtista, procedencia, genero);
}

void Cancion::verInfo() {
    cout << "        " << titulo << "       " << duracion.minutos << ":" << duracion.segundos << endl;
}

void Cancion::verInfoCompleta() {
    cout << "        " << titulo << "       " << duracion.minutos << ":" << duracion.segundos << "Artista: " << endl;
    artista.verInfoCompleta();
}