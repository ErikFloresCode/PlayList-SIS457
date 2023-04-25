#include <iostream>
#include "Artista.h"
using namespace std;

Artista::Artista(){
        nombre = "Desconocido";
        procedencia = "";
        genero = indefinido;
}

Artista::Artista(string nombre) {
    this->nombre = nombre;
    procedencia = "";
    genero = indefinido;
}

Artista::Artista(string nombre, string procedencia) {
    this->nombre = nombre;
    this->procedencia = procedencia;
    genero = indefinido;
}

Artista::Artista(string nombre, string procedencia, Genero genero) {
    this->nombre = nombre;
    this->procedencia = procedencia;
    this->genero = genero;
}

void Artista::verInfo(){
    cout << "Artista: " << nombre << endl;
    
}

void Artista::verInfoCompleta() {
    cout << "Artista: " << nombre << endl;
    cout << "   Procedencia: " << procedencia << endl;
    cout << "   Genero: " << genero << endl;
}