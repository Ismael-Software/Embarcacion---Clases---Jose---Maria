#include "yate.h"
#include <iostream>
using namespace std;

void Yate::activarMotor() {

    cout<<"\nMi Yate ya esta limpio, solo activa el motor y vamonos"<<endl;
};

void Yate::helipuerto() {

    if (tieneHelipuerto) {
        cout<<"\nSi, hay un helipuerto cerca de la costa"<<endl;
    }
    else {
        cout<<"\nNo, ahora vete de aqui, RAPIDO!!!"<<endl;
    }
};

void Yate::solicitarYate() {

        cout<<"\n************************************************************\n";
        cout<<"\nCual es la matricula de su yate?: "; cin>>matricula;
        cout<<"\nCual es el nombre que le puso a su yate?: "; cin>>nombre;
        cout<<"\nCuanto mide la eslora de su yate en metros?: "; cin>>eslora;
        cout<<"\nCuanto mide la manga de su yate en metros?: "; cin>>manga;
        cout<<"\nCuanta potencia tiene tu yate para navegar?: "; cin>>potenciaMotor;
        cout<<"\nEn que anio fue que construyo su yate?: "; cin>>anioConstruccion;
        cout<<"\nCuantas habitaciones tiene tu yate?: "; cin>>numeroCamarotes;
        cout<<"\nTiene un helipuerto donde estacionar su yate?: "; cin>>respuesta;
        tieneHelipuerto = (respuesta == "si" || respuesta == "SI");
};

void Yate::mostrarResultadosYate() {

        cout<<"\n******************** - Yate - ********************\n";
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Nombre del bote: "<<nombre<<endl;
        cout<<"Tamanio del eslora: "<<eslora<<endl;
        cout<<"Tamanio del manga: "<<manga<<endl;
        cout<<"Potencia del motor: "<<potenciaMotor;
        cout<<"Anio de construcion: "<<anioConstruccion<<endl;
        cout<<"Total de camarotes: "<<numeroCamarotes<<endl;
        cout<<"Tiene helipuerto: "<<tieneHelipuerto<<endl;
        cout<<"*******************************************\n";
}
