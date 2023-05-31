#include "CancionFileDataManager.h"

#include <iostream>
#include <list>
#include <List>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>


using namespace std;



list<Cancion> CancionFileDataManager::load() {
    list<Cancion> listaCanciones;
    ifstream cin2("canciones.txt");

    if (!cin2) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return listaCanciones;
    }
    string titulo, minuto, segundo, nro_vista, nro_artista;
    int minutos, segundos, nro_vistas, nro_artistas;
    int nro = 1;
    string line;
    while (std::getline(cin2, line)) {
        
        // Leer el título hasta encontrar una coma seguida de un número
        size_t pos_coma = line.find(',');
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ',' && isdigit(line[i + 1])) {
                pos_coma = i;
                if (pos_coma != std::string::npos) {
                    titulo = line.substr(0, pos_coma);
                }
                break;
            }
        }
        

        // Leer los minutos hasta encontrar un ':'
        size_t pos_dos_puntos = line.find(':', pos_coma);
        if (pos_dos_puntos != std::string::npos) {
            minuto = line.substr(pos_coma + 1, pos_dos_puntos - pos_coma - 1);
        }

        // Leer los segundos hasta encontrar un espacio en blanco
        size_t pos_espacio = line.find(' ', pos_dos_puntos);
        if (pos_espacio != std::string::npos) {
            segundo = line.substr(pos_dos_puntos + 1, pos_espacio - pos_dos_puntos - 1);
        }
        
        // saltar basura
        size_t pos_coma2 = line.find(',', pos_espacio);

        // Leer el código hasta encontrar una coma
        size_t pos_coma3 = line.find(',', pos_coma2 + 1);
        if (pos_coma3 != std::string::npos) {
            nro_artista = line.substr(pos_coma2 + 1, pos_coma3 - pos_coma2 - 1);
        }

        // Leer la calificación hasta el final de la línea
        nro_vista = line.substr(pos_coma3 + 1);

        //convertir a numeros las cadenas minuto segundo codigo y calificaiones
        minutos = stoi(minuto);
        segundos = stoi(segundo);
        nro_vistas = stoi(nro_vista);
        nro_artistas = stoi(nro_artista);
        
        // Imprimir los resultados
        std::cout << "nro" << nro << ".-" << titulo << " " << minutos << ":" << segundos << " " << nro_vistas << " " << nro_artistas << endl;

        // Realizar cualquier otro procesamiento necesario con los datos extraídos
        listaCanciones.push_back(Cancion(titulo, minutos, segundos, nro, nro_artistas, nro_vistas));
        nro++;
    }

    
    return listaCanciones;
}

void CancionFileDataManager::save(Cancion cancion) {
    ofstream cout2;
    cout2.open("canciones.txt", std::ios_base::app);
    std::stringstream ss;
    ss << "\n" << cancion.getTitulo() << ',' << cancion.getTiempo().minutos << ':' << cancion.getTiempo().segundos << " ," << cancion.getNro_artista() << ',' << cancion.getVistas();
    std::string s = ss.str();
    cout2 << s;
}