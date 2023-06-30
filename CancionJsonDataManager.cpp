#include "CancionJsonDataManager.h"

#include <iostream>
#include <list>
#include <List>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>


using namespace std;

list<Cancion> CancionJsonDataManager::load() {
    list<Cancion> listaCanciones;
    ifstream cin2("canciones.json");

    if (!cin2) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return listaCanciones;
    }
    string titulo, minuto, segundo, artista;
    int minutos, segundos;
    int nro = 1;
    string line;
    int bandera = 0;
    size_t posBusc = 0;

    while (std::getline(cin2, line)) {
        
        if (line.find(':') <= line.length()) {
            size_t dospuntos = line.find(':');
            size_t inicio = line.find('"') + 1;
            size_t final = line.find('"', inicio) - 1;
            bandera++;
            switch (bandera)
            {
            case 1:
                titulo = line.substr(inicio, final);
                cout << "titulo: " << titulo << endl;
                break;
            case 2:
                minuto = line.substr(inicio, final);
                cout << "minutos: " << titulo << endl;
                break;
            case 3:
                segundo = line.substr(inicio, final);
                cout << "segundos: " << titulo << endl;
                break;
            case 4:
                artista = line.substr(inicio, final);
                cout << "artista: " << titulo << endl;
                break;
            default:
                bandera = 0;
                break;
            }
        }

	}
	return listaCanciones;
}

void CancionJsonDataManager::save(Cancion cancion) {
	
}