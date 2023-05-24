#pragma once
#include <iostream>
#include <list>

#include "Cancion.h"

using namespace std;
class CancionDataManager
{
	virtual list<Cancion> load() = 0;
	virtual void save(Cancion cancion) = 0;
};

