#ifndef YATE_H
#define YATE_H

#include "Embarcacion.h"

class Yate : public Embarcacion {

private:
    int numeroCamarotes;
    double potenciaMotor;
    bool tieneHelipuerto;
    string respuesta;

public:
    void activarMotor();
    void helipuerto();
    void solicitarYate();
    void mostrarResultadosYate();
};

#endif
