#pragma once
#include "CancionDataManager.h"
#include "ArtistaDataManager.h"
class CancionFileDataManager :
    public CancionDataManager
{
//private:
    //ArtistaDataManager* artistadatamanager;
public:
    //CancionDataManager(ArtistaDataManager &artistadatamanager);
    list<Cancion> load()override;
    void save(Cancion cancion)override;
};

