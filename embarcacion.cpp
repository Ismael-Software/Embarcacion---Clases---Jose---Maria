#include "embarcacion.h"
#include <iostream>
using namespace std;

Embarcacion::Embarcacion(){

    cout<<"\nHola, que tal"<<endl;
    cout<<"<\nMi nombre es John y esta es mi central de embarcacion, tengo bastantes barcos aqui"<<endl;
};

void Embarcacion::navegar() {

     cout<<"\nEl bote ya esta listo, es hora de NAVEGAR!!!!!!"<<endl;
};

void Embarcacion::navegando() {

    cout<<"\nEstamos en aguas internacionales, hay que tener cuidado"<<endl;
};

void Embarcacion::policiaAtrapada() {

    cout<<"\nNos atrapo la marina, VERRDI, BORRA MI HISTORIAL DE GOOGLE!!!!"<<endl;
};

void Embarcacion::atracar() {

    cout<<"\nTengan cuidado, la marina esta en la orilla, VENDRAN A ATRACAR NUESTRO BOTE!!!!!!"<<endl;
};

Embarcacion::~Embarcacion() {

    cout<<"\nYa nos atrapo la policia, lo siento amigos"<<endl;
}
