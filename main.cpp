#include <iostream>
#include "velero.h"
#include "yate.h"
#include "lancha.h"
#include <conio.h>
using namespace std;

int main() {

    cout << "\n***** - Registro del velero - *****\n";
    Velero* velero = new Velero();
    velero->navegar();
    velero->navegando();
    velero->atracar();
    velero->izarVelas();
    velero->policiaAtrapada();
    velero->solicitarVelero();
    velero->mostrarResultadosVelero();

    cout << "\n***** - Registro del yate - *****\n";
    Yate* yate = new Yate();
    yate->navegar();
    yate->activarMotor();
    yate->navegando();
    yate->atracar();
    yate->policiaAtrapada();
    yate->solicitarYate();
    yate->mostrarResultadosYate();

    cout << "\n***** - Registro de la lancha - *****\n";
    Lancha* lancha = new Lancha();
    lancha->navegar();
    lancha->navegando();
    lancha->atracar();
    lancha->acelerar();
    lancha->policiaAtrapada();
    lancha->solicitarLancha();
    lancha->mostrarResultadosLancha();

    delete velero;
    delete yate;
    delete lancha;

    getch();
    return 0;
}
