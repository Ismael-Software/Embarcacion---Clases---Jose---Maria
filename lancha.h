#ifndef LANCHA_H
#define LANCHA_H

#include "Embarcacion.h"

class Lancha : public Embarcacion {
private:
    int capacidadPasajeros;
    string tipoCasco;
    double velocidadMaxima;

public:
    void acelerar();
    void solicitarLancha();
    void mostrarResultadosLancha();
};

#endif
