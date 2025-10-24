#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Embarcacion {

public:
    string matricula, nombre,respuesta;
    double eslora, manga;
    int anioConstruccion;
    int numeroMastiles,numeroCamarotes,capacidadPasajeros;
    string tipoVela,tipoCasco;
    double potenciaMotor,velocidadMaxima;
    bool tieneHelipuerto;


public:
    Embarcacion () {

        cout<<"\nHola, que tal"<<endl;
        cout<<"<\nMi nombre es John y esta es mi central de embarcacion, tengo bastantes barcos aqui"<<endl;
    };

    void navegar() {

        cout<<"\nEl bote ya esta listo, es hora de NAVEGAR!!!!!!"<<endl;
    };

    void navegando() {

        cout<<"\nEstamos en aguas internacionales, hay que tener cuidado"<<endl;
    };

    void policiaAtrapada() {

        cout<<"\nNos atrapo la marina, VERRDI, BORRA MI HISTORIAL DE GOOGLE!!!!"<<endl;
    };

    void atracar() {

        cout<<"\nTengan cuidado, la marina esta en la orilla, VENDRAN A ATRACAR NUESTRO BOTE!!!!!!"<<endl;
    };

    void izarVelas() {

        cout<<"\nLa marina nos sigue, iza las velas, RAPIDO!!!"<<endl;
    };

    void activarMotor() {

        cout<<"\nMi Yate ya esta limpio, solo activa el motor y vamonos"<<endl;
    };

    void acelerar() {

        cout<<"\nLa lancha tiene mucha potencia, solo sigue acelerando que aun nos sigue la marina!!!"<<endl;
    };

    void helipuerto() {        /*Es para el tipo e dato bool*/

        if (tieneHelipuerto) {
            cout<<"\nSi, hay un helipuerto cerca de la costa"<<endl;
        }
        else {
            cout<<"\nNo, ahora vete de aqui, RAPIDO!!!"<<endl;
        }
    };

    void solicitarVelero() {      /*Empezar a solicitar datos*/

        cout<<"\n************************************************************\n";
        cout<<"\nCual es la matricula de su velero?: "; cin>>matricula;
        cout<<"\nCual es el nombre que le puso a su velero?: "; cin>>nombre;
        cout<<"\nCuanto mide la eslora de su velero en metros?: "; cin>>eslora;
        cout<<"\nCuanto mide la manga de su velero en metros?: "; cin>>manga;
        cout<<"\nEn que anio fue que construyo su velero?: "; cin>>anioConstruccion;
        cout<<"\nCuantos mastiles tiene su velero?: "; cin>>numeroMastiles;
        cout<<"\nComo son las velas que tiene su velero?: "; cin>>tipoVela;
    };

    void mostrarResultadosVelero() {      /*Empezar a mostrar los resultados de las pregunas*/

        cout<<"\n******************** - Velero - ********************\n";
        cout<<"Matricula: "<<matricula<<endl;
        cout<<"Nombre del bote: "<<nombre<<endl;
        cout<<"Tamanio del eslora: "<<eslora<<endl;
        cout<<"Tamanio del manga: "<<manga<<endl;
        cout<<"Anio de construcion: "<<anioConstruccion<<endl;
        cout<<"Total de mastiles: "<<numeroMastiles<<endl;
        cout<<"Tipo de vela: "<<tipoVela<<endl;
        cout<<"*******************************************\n";
    };

     void solicitarYate() {

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

    void mostrarResultadosYate() {

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
    };

    void solicitarLancha() {

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

    void mostrarResultadosLancha() {

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
    };

    ~Embarcacion() {

        cout<<"\nYa nos atrapo la policia, lo siento amigos"<<endl;
    };

};

int main() {

    cout << "\n***** - Registro del velero - *****\n";
    Embarcacion* velero = new Embarcacion();
    velero->navegar();
    velero->navegando();
    velero->atracar();
    velero->izarVelas();
    velero->policiaAtrapada();
    velero->solicitarVelero();
    velero->mostrarResultadosVelero();

    cout << "\n***** - Registro del yate - *****\n";
    Embarcacion* yate = new Embarcacion();
    yate->navegar();
    yate->activarMotor();
    yate->navegando();
    yate->atracar();
    yate->policiaAtrapada();
    yate->solicitarYate();
    yate->mostrarResultadosYate();

    cout << "\n***** - Registro de la lancha - *****\n";
    Embarcacion* lancha = new Embarcacion();
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
