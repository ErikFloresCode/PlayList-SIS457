#include "CancionStaticDataManager.h"

#include <list>

list<Cancion> CancionStaticDataManager::load() {
	list<Cancion> listaCanciones ;
	Cancion c1, c2, c3, c4, c5;
	listaCanciones.push_back(c1);
	listaCanciones.push_back(c2);
	listaCanciones.push_back(c3);
	listaCanciones.push_back(c4);
	listaCanciones.push_back(c5);
	return listaCanciones;
}

void CancionStaticDataManager::save(Cancion cancion) {

}