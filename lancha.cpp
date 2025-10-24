#include "lancha.h"
#include <iostream>
using namespace std;

void Lancha::acelerar() {

        cout<<"\nLa lancha tiene mucha potencia, solo sigue acelerando que aun nos sigue la marina!!!"<<endl;
};

void Lancha::solicitarLancha() {

        cout<<"\n************************************************************\n";
        cout<<"\nCual es la matricula de su lancha?: "; cin>>matricula;
        cout<<"\nCual es el nombre que le puso a su lancha?: "; cin>>nombre;
        cout<<"\nCuanto mide la eslora de su lancha en metros?: "; cin>>eslora;
        cout<<"\nCuanto mide la manga de su lancha en metros?: "; cin>>manga;
        cout<<"\nCuantos pasajeros pueden haber en tu lancha?: "; cin>>capacidadPasajeros;
        cout<<"\nComo es el casco de su lancha?: "; cin>>tipoCasco;
        cout<<"\nCual es la velocidad maxima a la que puede ir su lancha?: "; cin>>velocidadMaxima;
        cout<<"\nEn que anio fue que construyo su velero?: "; cin>>anioConstruccion;
};

void Lancha::mostrarResultadosLancha() {

        cout<<"\n******************** - Lancha - ********************\n";
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Nombre del bote: "<<nombre<<endl;
        cout<<"Tamanio del eslora: "<<eslora<<endl;
        cout<<"Tamanio del manga: "<<manga<<endl;
        cout<<"Cantidad de pasajeros: "<<capacidadPasajeros<<endl;
        cout<<"Casco de la lancha: "<<tipoCasco<<endl;
        cout<<"Velocidad maxima: "<<velocidadMaxima<<endl;
        cout<<"Anio de construcion: "<<anioConstruccion<<endl;
        cout<<"*******************************************\n";
}
