#include "CancionFileDataManager.h"

#include <iostream>
#include <list>
#include <List>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

list<Cancion> CancionFileDataManager::load() {
    list<Cancion> listaCanciones;
    ifstream cin2("canciones.txt");
    string titulo, minuto, segundo, codigo, calificacion, basura;
    int minutos;
    int segundos;
    int codigos;
    int calificaciones;
    int nro = 1;
    //Call Me Crazy: A Five Film,5:08 PM,233,4
    //nombre,tiempo,codigo,calificacion
    while (cin2.peek() != EOF)
    {
        getline(cin2, titulo, ',');
        getline(cin2, minuto, ':');
        minutos = stoi(minuto);
        getline(cin2, segundo, ' ');
        segundos = stoi(segundo);
        getline(cin2, basura, ',');
        getline(cin2, codigo, ',');
        codigos = stoi(codigo);
        getline(cin2, calificacion);
        calificaciones = stoi(calificacion);
        
        cout << "Nro " << nro << ".-  " << titulo << " " << minutos << ":" << segundos << endl;

        listaCanciones.push_back(Cancion(titulo, minutos, segundos, codigos, calificaciones));
        nro++;
    }
    return listaCanciones;
}

void CancionFileDataManager::save(Cancion cancion) {
    ofstream cout2;
    cout2.open("canciones.txt", std::ios_base::app);
    std::stringstream ss;
    ss << cancion.getTitulo() << ',' << cancion.getTiempo().minutos << ':' << cancion.getTiempo().segundos << ',' << cancion.getCodigo() << ',' << cancion.getCalificacion();
    std::string s = ss.str();
    cout2 << s;
}