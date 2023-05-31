#include "ArtistaFileDataManager.h"

#include <iostream>
#include <list>
#include <List>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

list<Artista> ArtistaFileDataManager::load() {
    //lista donde se almacenaran los artistas leidos
    list<Artista> listaArtistas;

    ifstream cin2("artistas.txt");
    string nombre, procedencia, genero;
    //cin>>a;
    int nro = 1;
    //la funcion peek() verifica que no estemos al final del archivo
    while (cin2.peek() != EOF)// corroboramos que no hayamos llegado a la ultima linea, es decir al final del archivo
    {
        //cin2>>nombre>>procedencia>>genero;

        //leemos todo lo que podamos donde se encuentra el cursor, (en la primera iteracion al principio) hasta donde encontremos una primera coma
        getline(cin2, nombre, ',');
        // continuacion leemos hasta encontrar otra coma, que seria el dato asociado a la procednecia
        getline(cin2, procedencia, ',');
        // finalmente leemos desde donde este el cursor, toda la linea, que seria el resto de la informacion asociada al genero
        getline(cin2, genero);
        cout << "Nro " << nro << ".-  " << nombre << " " << procedencia << " " << genero << endl;
        nro++;

        //crear el artista
        listaArtistas.push_back(Artista(nombre, procedencia, string_to_genero(genero)));
        // y guardarlo en una lista
    }


    // cargar datos desde un archivo de texto


    //devolucion de la lista cargada con datos
    return listaArtistas;
}

void ArtistaFileDataManager::save(Artista artista) {
    //declaramos una variable que permita cargar en memoria un archivo para poder guardar en el mismo
    ofstream cout2;
    
    //abrimos el archivo en modo de edicion, la variable que hace referencia a dicho archivo es cout2
    cout2.open("artistas.txt", std::ios_base::app);

    //Para manipulacion y concatenacion extensa de cadenas es buena practica utilizar un stringstream para ir cargando todo en ese buffer
    std::stringstream ss;

    //ss es la variable que podria asumir el papel de una consola, es decir cin, donde le vamos pasando los datos que queremos que se vayan acumulando con el operador <<
    ss << "\n" << artista.getNombre() << ", " << artista.getProcedencia() << ", " << artista.getGenero();

    //convertimos el buffer a una cadena nuevamente
    std::string s = ss.str();

    //imprimimos la cadena en el buffer del archivo de texto leido, con esta asignacion, garantizamos que los datos se guarden.
    cout2 << s;
}