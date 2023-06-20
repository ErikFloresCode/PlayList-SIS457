#pragma once
#include "CancionDataManager.h"
class CancionJsonDataManager :
    public CancionDataManager
{
    list<Cancion> load()override;
    void save(Cancion cancion)override;
};

