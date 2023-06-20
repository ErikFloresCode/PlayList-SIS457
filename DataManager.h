#pragma once
#include "ArtistaDataManager.h"
#include "CancionDataManager.h"
#include "PlaylistDataManager.h"
class DataManager
{
private:
    //referencia a la unica instancia posible de la clase
    static DataManager* instance;

    //referencias a los manejadores de datos
    // de los artistas y canciones
    ArtistaDataManager* artistaDataManager;
    CancionDataManager* cancionDataManager;

    //constructor
    DataManager(ArtistaDataManager* amd,
        CancionDataManager* cmd);

public:

    //funcion que garantiza el patron singleton
    static DataManager* getInstance(ArtistaDataManager* amd, CancionDataManager* cmd);

    //getters a de los atributos
    ArtistaDataManager* getArtistaManager();
    CancionDataManager* getCancionManager();

};

DataManager* DataManager::instance = nullptr;
//un metodo estatico es clase::metodo();

