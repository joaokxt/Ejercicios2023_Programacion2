#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "contenedor.h"
using namespace std;

int opcion, cantContenedores=0, i;
Contenedor* contenedores[10];

void crear(){
    int code;
    string name;
    float max, min;

    system("cls");
    cout<<"Ingrese el codigo >>> ";
    cin>>code;
    cout<<"Ingrese el nombre del material >>> ";
    cin>>name;
    cout<<"Ingrese la capacidad maxima del contnedor >>> ";
    cin>>max;
    cout<<"Ingrese la minima >>> ";
    cin>>min;
    contenedores[cantContenedores] = new Contenedor(code, name, max, min);
    cantContenedores++;
}

void agregar(){
    float amount;

    system("cls");
    for(i=0;i<cantContenedores;i++){
        cout<<"=-=-=-=|CONTENEDOR "<<i+1<<"|=-=-=-="<<endl;
        cout<<" - Codigo: "<<contenedores[i]->getCodigo()<<endl;
        cout<<" - Material: "<<contenedores[i]->getNombre()<<endl;
        cout<<" - Cantidad: "<<contenedores[i]->getCantidadActual()<<"/"<<contenedores[i]->getCantidadMaxima()<<endl;
    }
    cout<<"\nIngrese el codigo del contenedor deseado >>> ";
    cin>>opcion;
    for(i=0;i<cantContenedores;i++){
        if(contenedores[i]->getCodigo()==opcion){
            cout<<"Ingrese la cantidad a agregar >>> ";
            cin>>amount;
            contenedores[i]->deposito(amount);
        }
    }
}

void extraer(){
    float amount;

    system("cls");
    for(i=0;i<cantContenedores;i++){
        cout<<"=-=-=-=|CONTENEDOR "<<i+1<<"|=-=-=-="<<endl;
        cout<<" - Codigo: "<<contenedores[i]->getCodigo()<<endl;
        cout<<" - Material: "<<contenedores[i]->getNombre()<<endl;
        cout<<" - Cantidad: "<<contenedores[i]->getCantidadActual()<<"/"<<contenedores[i]->getCantidadMaxima()<<endl;
    }
    cout<<"\nIngrese el codigo del contenedor deseado >>> ";
    cin>>opcion;
    for(i=0;i<cantContenedores;i++){
        if(contenedores[i]->getCodigo()==opcion){
            cout<<"Ingrese la cantidad a extraer >>> ";
            cin>>amount;
            contenedores[i]->extraccion(amount);
        }
    }
}

void consultar(){
    system("cls");
    for(i=0;i<cantContenedores;i++){
        cout<<"=-=-=-=|CONTENEDOR "<<i+1<<"|=-=-=-="<<endl;
        cout<<" - Codigo: "<<contenedores[i]->getCodigo()<<endl;
        cout<<" - Material: "<<contenedores[i]->getNombre()<<endl;
        cout<<" - Cantidad: "<<contenedores[i]->getCantidadActual()<<"/"<<contenedores[i]->getCantidadMaxima()<<endl;
    }
    cout<<"\nIngrese un numero para salir >>> ";
    cin>>opcion;
}

int main(){
    while(true){
        system("cls");
        cout<<"=-=-=-=|DEPOSITO|=-=-=-="<<endl;
        cout<<"1. Crear contenedor"<<endl;
        cout<<"2. Agregar material"<<endl;
        cout<<"3. Extraer material"<<endl;
        cout<<"4. Verificar estado"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"\nIngrese su opcion >>>";
        cin>>opcion;
        switch(opcion){
            case 1:
                crear();
                break;
            case 2:
                agregar();
                break;
            case 3:
                extraer();
                break;
            case 4:
                consultar();
                break;
            default:
                return 0;
        }   
    }
}