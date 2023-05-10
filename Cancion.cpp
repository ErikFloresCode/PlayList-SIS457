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

Cancion::Cancion(string titulo, int minutos, int segundos, string nombreArtista, string procedencia, Genero genero, int calificacion) {
    this->titulo = titulo;
    duracion = Tiempo(minutos, segundos);
    artista = Artista(nombreArtista, procedencia, genero);
    this->calificacion = calificacion;
}


Cancion::Cancion(string titulo, Tiempo duracion, Artista artista, int calificacion) {
    this->titulo = titulo;
    this->duracion = duracion;
    this->artista = artista;
    this->calificacion = calificacion;
}

void Cancion::verInfo() {
    cout << "        " << titulo << "       " << duracion.minutos << ":" << duracion.segundos << endl;
}

void Cancion::verInfoCompleta() {
    cout << "        " << titulo << "       " << duracion.minutos << ":" << duracion.segundos << "Artista: " << endl;
    artista.verInfoCompleta();
}

int Cancion::extraer_tiempo_seg() {
    return duracion.segundos + 60 * duracion.minutos;
}

bool Cancion::operator < ( Cancion& otra) {
    return calificacion < otra.calificacion;
}

bool Cancion::operator==(const Cancion& otra) const {
    return titulo == otra.titulo;
}
