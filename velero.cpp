#include "velero.h"
#include <iostream>
using namespace std;

void Velero::izarVelas() {

    cout<<"\nLa marina nos sigue, iza las velas, RAPIDO!!!"<<endl;
};

void Velero::solicitarVelero() {

        cout<<"\n************************************************************\n";
        cout<<"\nCual es la matricula de su velero?: "; cin>>matricula;
        cout<<"\nCual es el nombre que le puso a su velero?: "; cin>>nombre;
        cout<<"\nCuanto mide la eslora de su velero en metros?: "; cin>>eslora;
        cout<<"\nCuanto mide la manga de su velero en metros?: "; cin>>manga;
        cout<<"\nEn que anio fue que construyo su velero?: "; cin>>anioConstruccion;
        cout<<"\nCuantos mastiles tiene su velero?: "; cin>>numeroMastiles;
        cout<<"\nComo son las velas que tiene su velero?: "; cin>>tipoVela;
};

void Velero::mostrarResultadosVelero() {

        cout<<"\n******************** - Velero - ********************\n";
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Nombre del bote: "<<nombre<<endl;
        cout<<"Tamanio del eslora: "<<eslora<<endl;
        cout<<"Tamanio del manga: "<<manga<<endl;
        cout<<"Anio de construcion: "<<anioConstruccion<<endl;
        cout<<"Total de mastiles: "<<numeroMastiles<<endl;
        cout<<"Tipo de vela: "<<tipoVela<<endl;
        cout<<"*******************************************\n";
}
