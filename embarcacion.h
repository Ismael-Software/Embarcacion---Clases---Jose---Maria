#ifndef EMBARCACION_H
#define EMBARCACION_H

#include <iostream>
#include <string>
using namespace std;

class Embarcacion {

public:
    string matricula, nombre;
    double eslora, manga;
    int anioConstruccion;

public:
    Embarcacion();
    void solicitarDatos();
    void navegar();
    void navegando();
    void policiaAtrapada();
    void atracar();
    ~Embarcacion();
};

#endif
