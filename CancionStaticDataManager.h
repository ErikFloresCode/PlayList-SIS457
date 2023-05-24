#pragma once
#include "CancionDataManager.h"
class CancionStaticDataManager :
    public CancionDataManager
{
    list<Cancion> load()override;
    void save(Cancion cancion)override;
};

