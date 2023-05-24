#pragma once
#include "ArtistaDataManager.h"

#include <iostream>
#include <list>
using namespace std;


class ArtistaFileDataManager :public ArtistaDataManager {
public:
	list<Artista> load()override;
	void save(Artista artista)override;
};