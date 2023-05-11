#include <iostream>
#include <string.h>
#include <stdio.h>
#include "producto.h"
#include "perecedero.h"
#include "noPerecedero.h"
using namespace std;

Perecedero* perecederos[100];
NoPerecedero* noPerecederos[100];
int opcion, cantP=0, cantNP=0;

void crearPerecedero(){
    char name[30];
    float price;
    int days;
    fflush(stdin);
    cout<<"Ingrese el nombre >>>";
    cin.getline(name, 30);
    cout<<"Ingrese el precio >>>";
    cin>>price;
    cout<<"Ingrese los dias a caducar >>>";
    cin>>days;
    perecederos[cantP]=new Perecedero(name, price, days);
    cantP++;
}
void crearNoPerecedero(){
    char name[30], type[30];
    float price;
    fflush(stdin);
    cout<<"Ingrese el nombre >>>";
    cin.getline(name, 30);
    cout<<"Ingrese el precio >>>";
    cin>>price;
    fflush(stdin);
    cout<<"Ingrese el tipo >>>";
    cin.getline(type, 30);
    noPerecederos[cantNP]=new NoPerecedero(name, price, type);
    cantNP++;
}

void deposito(){
    cout<<"=-=-=-=|PERECEDEROS|=-=-=-="<<endl;
    for(int i=0; i<cantP; i++){
        cout<<"#"<<i+1<<endl;
        cout<<" -Nombre: "<<perecederos[i]->getNombre()<<endl;
        cout<<" -Precio: "<<perecederos[i]->getPrecio()<<endl;
        cout<<" -Dias a caducar: "<<perecederos[i]->getDias()<<endl;
        cout<<endl;
    }
    cout<<"=-=-=-=|NO PERECEDEROS|=-=-=-="<<endl;
    for(int i=0; i<cantNP; i++){
        cout<<"#"<<i+1<<endl;
        cout<<" -Nombre: "<<noPerecederos[i]->getNombre()<<endl;
        cout<<" -Precio: "<<noPerecederos[i]->getPrecio()<<endl;
        cout<<" -Tipo: "<<noPerecederos[i]->getTipo()<<endl;
        cout<<endl;
    }
}

int main(){
    while(true){
        cout<<"=-=-=-=|DEPOSITO|=-=-=-="<<endl;
        cout<<"1. Registrar producto perecedero"<<endl;
        cout<<"2. Registrar producto no perecedero"<<endl;
        cout<<"3. Ver depósito"<<endl;
        cout<<"4. Calcular monto"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"\nIngrese su opcion >>>";
        cin>>opcion;
        switch(opcion){
            case 1:
                crearPerecedero();
                break;
            case 2:
                crearNoPerecedero();
                break;
            case 3:
                deposito();
                break;
            case 4:
                break;
            default:
                return 0;
        }   
    }
}