#include <iostream>
#include "ArtistaStaticDataManager.h"

using namespace std;

list<Artista> ArtistaStaticDataManager::load() {
	Artista a1, a2, a3, a4, a5;
	list<Artista> Lista;
	Lista.push_back(a1);
	Lista.push_back(a2);
	Lista.push_back(a3);
	Lista.push_back(a4);
	Lista.push_back(a5);
	return Lista;
}

void ArtistaStaticDataManager::save(Artista artista) {

}