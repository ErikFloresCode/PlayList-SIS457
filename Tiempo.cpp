#include <iostream>
#include "Tiempo.h"
using namespace std;

Tiempo::Tiempo() {
    minutos = 3;
    segundos = 30;
}

Tiempo::Tiempo(int minutos, int segundos) {
    this->minutos = minutos;
    this->segundos = segundos;
}