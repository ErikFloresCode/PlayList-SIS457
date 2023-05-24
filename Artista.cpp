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
// Rock, Baladas, Cumbia, Romatica, Pop, Romantica, Salsa, indefinido
Genero string_to_genero(string genero) {
    if ("Rock" == genero)
        return Rock;
    if ("Baladas" == genero)
        return Rock;
    if ("Cumbias" == genero)
        return Rock;
    if ("Romantica" == genero)
        return Rock;
    if ("Pop" == genero)
        return Rock;
    if ("Salsa" == genero)
        return Rock;
    else
        return indefinido
}