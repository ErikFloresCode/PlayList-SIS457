#include <iostream>
#include "Playlist.h"
using namespace std;

bool comparar_por_duracion(Cancion& cancion1, Cancion& cancion2) {
    return cancion1.extraer_tiempo_seg() < cancion2.extraer_tiempo_seg();
}

bool comparar_por_calificacion(Cancion& cancion1, Cancion& cancion2) {
    return cancion1.getCalificacion() < cancion2.getCalificacion();
}

PlayList::PlayList() {
    nombreLista = "lista Por defecto";
    descripcion = "";
}

PlayList::PlayList(string nombreLista) {
    this->nombreLista = nombreLista;
    descripcion = "";
}

PlayList::PlayList(string nombreLista, string descripcion) {
    this->nombreLista = nombreLista;
    this->descripcion = descripcion;
}

void PlayList::importar(PlayList lista) {
    for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
        agregarCancion(*it);
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
    for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
        if (c.getTitulo() == it->getTitulo())
            existe = true;
    }
    if (!existe)
        listaCanciones.push_back(c);
}

void PlayList::verLista() {
    int i = 0;
    cout << nombreLista << endl;
    cout << "Nro    calificacion      /      titulo          / duracion (mm:ss)" << endl;
    for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
        i++;
        cout << i << "   " << it->getCalificacion() << "        " << it->getTitulo() << "         " << it->getTiempo().minutos << ":" << it->getTiempo().segundos << endl;
    }
}

void PlayList::eliminar_Cancion(int nroCancion){
    int i = 1;
    for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
        if (nroCancion == i) {
            listaCanciones.remove(*it);
            break;
        }
        i++;
    }
}

Cancion PlayList::buscarCancion(string titulo) {
    Cancion c(titulo), c2("Cancion no encontrada");
    for (auto it = listaCanciones.begin(); it != listaCanciones.end(); ++it) {
        if (it->getTitulo() == c.getTitulo()) {
            cout << "cancion encontrada" << endl;
            return *it;
        }
    }
    return c2;
}

void PlayList::mostrarTop() {
    mostrarTop(listaCanciones.size());
}

void PlayList::mostrarTop(int n) {
    list<Cancion>::iterator it = listaCanciones.begin();
    cout << "Nro        Titulo" << endl;
    for (int i = 0; i < n; i++) {
        cout << it->getCalificacion() << "        " << it->getTitulo() << endl;
        it++;
    }
}

void PlayList::ordenar_por_calificacion() {
    listaCanciones.sort(comparar_por_calificacion);
    listaCanciones.reverse();
}

void PlayList::ordenar_por_tiempo() {
    listaCanciones.sort(comparar_por_duracion);
    //listaCanciones.reverse();
}