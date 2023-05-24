#pragma once
#include "ArtistaDataManager.h"

#include <iostream>
#include <list>
using namespace std;

class ArtistaStaticDataManager:public ArtistaDataManager{
public:
	list<Artista> load()override;
	void save(Artista artista)override;
};

