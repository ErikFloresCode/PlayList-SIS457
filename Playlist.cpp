#include <iostream>
#include "Playlist.h"
using namespace std;

PlayList::PlayList() {
    nombreLista = "lista De Por defecto";
    descripcion = "";
}

PlayList::PlayList(string nombreLista, string descripcion) {
    this->nombreLista = nombreLista;
    this->descripcion = descripcion;
}

void PlayList::importar(PlayList lista) {
    for (int i = 0; i < lista.getListaCanciones().size(); i++) {
        agregarCancion(lista.getListaCanciones()[i]);
    }
}

void PlayList::clonarlista(PlayList lista) {
    nombreLista = lista.getNombrelista();
    descripcion = lista.getDescripcion();
    listaCanciones.clear();
    listaCanciones = lista.getListaCanciones();
}

void PlayList::agregarCancion(Cancion c) {
    //Validado sin canciones repetidas
    bool existe = false;
    for (int i = 0; i < listaCanciones.size(); i++) {
        if (c.getTitulo() == listaCanciones[i].getTitulo())
            existe = true;
    }
    if (!existe)
        listaCanciones.push_back(c);
}

void PlayList::verLista() {
    cout << nombreLista << endl;
    cout << "Nro      /     titulo      / duracion (mm:ss)" << endl;
    for (int i = 0; i < listaCanciones.size(); i++) {
        cout << i + 1 << "        " << listaCanciones[i].getTitulo() << "         " << listaCanciones[i].getTiempo().minutos << ":" << listaCanciones[i].getTiempo().segundos << endl;
    }
}

void PlayList::eliminar_Cancion(int nroCancion){
    listaCanciones.erase(listaCanciones.begin() + nroCancion - 1);
}

Cancion PlayList::buscarCancion(string titulo) {
    Cancion c;
    for (int i = 0; i < listaCanciones.size(); i++) {
        if (listaCanciones[i].getTitulo() == c.getTitulo()) {
            cout << "cancion encontrada" << endl;
            c = listaCanciones[i];
        }
    }
    return c;
}