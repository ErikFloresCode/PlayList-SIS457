#include <iostream>
#include <Windows.h>
#include "Funciones.h"
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

PlayList* seleccionar_lista(vector<PlayList*> Mislistas) {
    int opc;
    PlayList listaDefecto;
    cout << "Seleccione una lista " << endl;
    for (int i = 0; i < Mislistas.size(); i++) {
        cout << i + 1 << ".-   " << Mislistas[i]->getNombrelista() << endl;
    }
    cin >> opc;
    opc--;
    return Mislistas[opc];
}

void llenarRocola(vector<Cancion>* p) {
    p->push_back(Cancion("Bohemian Rhapsody ", 5, 55, "Queen", "Reino Unido", Rock, 95));
    p->push_back(Cancion("Hotel California  ", 6, 30, "Eagles", "Estados Unidos", Rock, 83));
    p->push_back(Cancion("Yesterday         ", 2, 4, "The Beatles", "Reino Unido", Pop, 74));
    p->push_back(Cancion("La Bamba          ", 2, 53, "Ritchie Valens", "Estados Unidos", Cumbia, 81));
    p->push_back(Cancion("Bésame Mucho      ", 3, 10, "Consuelo Velázquez", "México", Baladas, 68));
    p->push_back(Cancion("El Triste         ", 4, 10, "José José", "México", Romantica, 88));
    p->push_back(Cancion("Livin' on a Prayer", 4, 11, "Bon Jovi", "Estados Unidos", Rock, 89));
    p->push_back(Cancion("Vivir Mi Vida     ", 4, 13, "Marc Anthony", "Estados Unidos", Salsa, 93));
    p->push_back(Cancion("Shape of You      ", 3, 54, "Ed Sheeran", "Reino Unido", Pop, 56));
    p->push_back(Cancion("Como La Flor      ", 3, 50, "Selena", "Estados Unidos", Cumbia, 87));
}

void mostrarRocola(vector<Cancion>* p) {
    for (int i = 0; i < p->size(); i++) {
        cout << i + 1;
        p->begin()[i].verInfo();
    }
}

void error(string mensaje) {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\n" << mensaje << endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void color(string cadena, int n) {
    SetConsoleTextAttribute(hConsole, n);
    cout << cadena << endl;
    SetConsoleTextAttribute(hConsole, 15);
}