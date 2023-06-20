#include "DataManager.h"

DataManager::DataManager(ArtistaDataManager* amd,
    CancionDataManager* cmd)
{
    //apuntamos a la referencia de amd
    artistaDataManager = amd;
    //apuntamos a la referencia de amd con el operador &
    cancionDataManager = cmd;
}

DataManager* DataManager::getInstance(
    ArtistaDataManager* amd,
    CancionDataManager* cmd
) {

    {
        if (instance == nullptr)
        {
            cout << "creando instancia" << endl;
            instance = new DataManager(amd, cmd);
        }
        return instance;
    }
}

ArtistaDataManager* DataManager::getArtistaManager()
{
    artistaDataManager->load();
    return artistaDataManager;
}

CancionDataManager* DataManager::getCancionManager()
{
    cancionDataManager->load();
    return cancionDataManager;
}

