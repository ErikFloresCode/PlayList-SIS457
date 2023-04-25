#pragma once

#include <iostream>
#include "Artista.h"
#include "Tiempo.h"
using namespace std;

class Cancion
{
private:
    string titulo;
    Tiempo duracion;
    Artista artista;

public:
    Cancion();
    Cancion(string titulo);
    Cancion(string titulo, Tiempo duracion);
    Cancion(string titulo, Tiempo duracion, Artista artista);
    //getters
    string getTitulo() { return titulo; }
    Tiempo getTiempo() { return duracion; }
    //otras funciones
    void verInfo();
    void verInfoCompleta();
    
};