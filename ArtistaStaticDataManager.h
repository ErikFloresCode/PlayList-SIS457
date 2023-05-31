#pragma once
#include "ArtistaDataManager.h"

class ArtistaStaticDataManager:
	public ArtistaDataManager
{
public:
	list<Artista> load()override;
	void save(Artista artista)override;
};

