#pragma once
#include "ArtistaDataManager.h"

class ArtistaFileDataManager :
	public ArtistaDataManager 
{
public:
	list<Artista> load()override;
	void save(Artista artista)override;
};