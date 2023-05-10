#pragma once

#include <iostream>
#include <list>
#include "Cancion.h"
using namespace std;

//bool comparar_por_duracion(Cancion& cancion1, Cancion& cancion2);
//bool comparar_por_calificacion(Cancion& cancion1, Cancion& cancion2);


class PlayList
{
private:
    string nombreLista;
    string descripcion;
    list<Cancion> listaCanciones;
public:
    PlayList();
    PlayList(string nombreLista);
    PlayList(string nombreLista, string descripcion);

    //getters
    string getNombrelista() { return nombreLista; }
    string getDescripcion() { return descripcion; }
    list<Cancion> getListaCanciones() { return listaCanciones; }

    //setters
    void setListaCanciones(list<Cancion> newlist);

    //otras funciones
    void importar(PlayList lista);
    void clonarlista(PlayList lista);
    void agregarCancion(Cancion c);
    void verLista();
    void eliminar_Cancion(int nroCancion);
    Cancion buscarCancion(string titulo);
    void ordenar_por_calificacion();
    void ordenar_por_tiempo();
    void mostrarTop();
    void mostrarTop(int n);

};