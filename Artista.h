#pragma once

#include <iostream>
using namespace std;

enum Genero { Rock, Baladas, Cumbia, Pop, Romantica, Salsa, indefinido };
class Artista
{
private:
    string nombre;
    string procedencia;
    Genero genero;
    int nro_artista;
public:

    Artista();
    Artista(string nombre);
    Artista(string nombre, string procedencia);
    Artista(string nombre, string procedencia, Genero genero);
    //constructor para data manager
    Artista(string nombre, string porcedencia, Genero genero, int nro_artista);
    //getters
    string getNombre() { return nombre; }
    string getProcedencia() { return procedencia; }
    Genero getGenero() { return genero; }
    //otras funciones
    void verInfo();
    void verInfoCompleta();
};

Genero string_to_genero(string genero);