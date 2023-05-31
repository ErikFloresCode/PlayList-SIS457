#include <iostream>
#include "Artista.h"
using namespace std;

Artista::Artista(){
        nombre = "Desconocido";
        procedencia = "";
        genero = indefinido;
        nro_artista = 0;
}

Artista::Artista(string nombre) {
    this->nombre = nombre;
    procedencia = "";
    genero = indefinido;
    nro_artista = 0;
}

Artista::Artista(string nombre, string procedencia) {
    this->nombre = nombre;
    this->procedencia = procedencia;
    genero = indefinido;
    nro_artista = 0;
}

Artista::Artista(string nombre, string procedencia, Genero genero) {
    this->nombre = nombre;
    this->procedencia = procedencia;
    this->genero = genero;
    nro_artista = 0;
}

Artista::Artista(string nombre, string porcedencia, Genero genero, int nro_artista) {
    this->nombre = nombre;
    this->procedencia = procedencia;
    this->genero = genero;
    this->nro_artista = nro_artista;
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
        return indefinido;
}