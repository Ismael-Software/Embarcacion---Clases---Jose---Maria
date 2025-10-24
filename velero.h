#ifndef VELERO_H
#define VELERO_H

#include "Embarcacion.h"

class Velero : public Embarcacion {
private:
    int numeroMastiles;
    string tipoVela;

public:
    void izarVelas();
    void solicitarVelero();
    void mostrarResultadosVelero();
};

#endif
