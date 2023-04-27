#pragma once

#include <iostream>
#include <vector>
#include "Cancion.h"
using namespace std;

class PlayList
{
private:
    string nombreLista;
    string descripcion;
    vector<Cancion> listaCanciones;
public:
    PlayList();
    PlayList(string nombreLista);
    PlayList(string nombreLista, string descripcion);

    //getters
    string getNombrelista() { return nombreLista; }
    string getDescripcion() { return descripcion; }
    vector<Cancion> getListaCanciones() { return listaCanciones; }

    //otras funciones
    void importar(PlayList lista);
    void clonarlista(PlayList lista);
    void agregarCancion(Cancion c);
    void verLista();
    void eliminar_Cancion(int nroCancion);
    Cancion buscarCancion(string titulo);
};