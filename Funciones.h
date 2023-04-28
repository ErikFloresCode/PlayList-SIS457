#pragma once
#include <iostream>
#include <vector>
#include "PlayList.h"
using namespace std;

PlayList* seleccionar_lista(vector<PlayList*> Mislistas);
void llenarRocola(vector<Cancion>* p);
void mostrarRocola(vector<Cancion>* p);

void error(string mensaje);