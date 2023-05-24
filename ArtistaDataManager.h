#pragma once
#include <iostream>
#include <list>

#include "Artista.h"

using namespace std;
//clase abstracta
class ArtistaDataManager {
public:
	virtual list<Artista> load() = 0;
	virtual void save(Artista artista) = 0;
};

//peak ubica el cursor dentro del archivo .txt
//EOF fin del archivo de texto
//getline(cin2,variable,hasta donde leer
//cin2>>var>>var>>var3;
//Clasepadre* var = clasehija(); var es clse padre pero se comportara como clasehija