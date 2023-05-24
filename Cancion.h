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
    int codigo;
    int calificacion;
public:
    Cancion();
    Cancion(string titulo);
    Cancion(string titulo, Tiempo duracion);
    Cancion(string titulo, Tiempo duracion, Artista artista);
    Cancion(string titulo, Tiempo duracion, Artista artista, int calificacion);
    //constructor sin constructores
    Cancion(string titulo, int minutos, int segundos, string nombreArtista, string procedencia, Genero genero, int calificacion);
    Cancion(string titulo, int minutos, int segundos, int codigo, int calificacion);
    //getters
    string getTitulo() { return titulo; }
    Tiempo getTiempo() { return duracion; }
    int getCalificacion() { return calificacion; }
    int getCodigo() { return codigo; }
    int getCalificacion() { return calificacion; }
    //otras funciones
    void verInfo();
    void verInfoCompleta();
    int extraer_tiempo_seg();
    //operadores
    bool operator < (Cancion& otra);
    bool operator==(const Cancion& otra) const;
};
//el artista tiene un numero de lectura
//extraer numeros expresiones regulares, estas tiene patrones