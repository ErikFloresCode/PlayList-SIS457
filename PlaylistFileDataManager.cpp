#include "PlaylistFileDataManager.h"

#include <iostream>
#include <list>
#include <vector>
#include <List>
#include <fstream>
#include <sstream>
#include <string>
#include "CancionFileDataManager.h"

using namespace std;

list<PlayList> PlaylistFileDataManager::load() {

    list<PlayList> listaPlaylist;
    vector<int> numeros;
    int nro = 1;
    ifstream cin2;
    cin2.open("playlists.csv",ios::in);
    string nombre, descripcion,vector,line;

    size_t pos_nombre, pos_descripcion, indice_vector;

    while (getline(cin2, line)) {
        //posibilidades ., .",
        for (size_t i = 0; i < line.length();i++) {
            
            if ((line[i] == '.' && line[i+1] == ',')) {
                pos_nombre = i+1;
                break;
            }

            if (line[i] == '.' && line[i+1] == '"' && line[i+2] == ',') {
                pos_nombre = i + 2;
                break;
            }
        }
        nombre = line.substr(0, pos_nombre-1);
        
        //posibilidades ,[ ,"[
        for (size_t i = pos_nombre+1; i < line.length(); i++) {
            if (line[i] == ',' && line[i + 1] == '[') {
                pos_descripcion = i;
                break;
            }

            if (line[i] == ',' && line[i + 1] == '"' && line[i + 2] == '[') {
                pos_descripcion = i;
                break;
            }
        }

        descripcion = line.substr(pos_nombre + 1, pos_descripcion - pos_nombre - 1);

        vector = line.substr(pos_descripcion + 1);
        
        //std::cout << "nombre : " << nombre << endl;
        //std::cout << "descripcion : " << descripcion << endl;
        std::cout << vector << endl;

        PlayList playlist(nombre, descripcion);
        
        size_t j;
        list<Cancion> lista_canciones;
        if (vector.length() > 5) {
            for (size_t i = 0; i < vector.length(); i++) {
                if (vector[i] == '{') {
                    j = vector.find('}', i);
                    numeros.push_back(stoi(vector.substr(i + 1, j - i - 1)));
                }
            }
            cout << "numeros" << endl;
            for (int i = 0; i < numeros.size(); i++) {
                cout << numeros[i] << ";";
            }
            cout << endl;
            
            //mandar los datos
        }
        
        std::cout << "\n\n" ;
        numeros.clear();
    }
    return listaPlaylist;
}

void PlaylistFileDataManager::save(PlayList playlist) {

}
