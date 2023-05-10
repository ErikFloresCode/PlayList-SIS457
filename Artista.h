#pragma once

#include <iostream>
using namespace std;

enum Genero { Rock, Baladas, Cumbia, Romatica, Pop, Romantica, Salsa, indefinido };
class Artista
{
private:
    string nombre;
    string procedencia;
    Genero genero;

public:

    Artista();
    Artista(string nombre);
    Artista(string nombre, string procedencia);
    Artista(string nombre, string procedencia, Genero genero);
    //getters
    string getNombre() { return nombre; }
    string getProcedencia() { return procedencia; }
    Genero getGenero() { return genero; }
    //otras funciones
    void verInfo();
    void verInfoCompleta();
};