#pragma once
#include "CancionDataManager.h"
class CancionFileDataManager :
    public CancionDataManager
{
    list<Cancion> load()override;
    void save(Cancion cancion)override;
};

