#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "cuenta.h"
using namespace std;

Cuenta* cuentas[2];
bool cargado;

void carga(){
    int num;
    float tasa;
    srand(time(NULL));

    cout<<"|CUENTA 1|"<<endl;
    num = rand()%100+999;
    cout<<"Numero de cuenta: "<<num<<endl;
    cout<<"Saldo: $0"<<endl;
    cout<<"Interes >> ";
    cin>>tasa;
    cuentas[0]=new Cuenta(num, tasa);
    cout<<"CUENTA 1 CREADA"<<endl;

    cout<<"|CUENTA 2|"<<endl;
    num = rand()%100+999;
    cout<<"Numero de cuenta: "<<num<<endl;
    cout<<"Saldo: $0"<<endl;
    cout<<"Interes >> ";
    cin>>tasa;
    cuentas[1]=new Cuenta(num, tasa);
    cout<<"CUENTA 2 CREADA"<<endl;

    cargado = true;
    return;
}

int buscarCuenta(){
    int aux;
    cout<<"Ingrese el numero de la cuenta"<<endl;
    cout<<" >> ";
    cin>>aux;

    for(int i=0; i<2; i++){
        if(cuentas[i]->getNumero()==aux){
            return i;
        }
    }
    return -1;
}

void menuDeposito(){
    int indice, aux;

    cout<<"|DEPOSTIAR|"<<endl;
    indice = buscarCuenta();
    if(indice<0){
        cout<<"Cuenta no encontrada, retornando al menu"<<endl;
        return;
    } else {
        cout<<"Ingrese la cantidad a depositar"<<endl;
        cout<<" >> $";
        cin>>aux;
        cuentas[indice]->deposito(aux);
        return;
    }     
}

void menuExtraccion(){
    int indice, aux;

    cout<<"|EXTRAER|"<<endl;
    indice = buscarCuenta();
    if(indice<0){
        cout<<"Cuenta no encontrada, retornando al menu"<<endl;
        return;
    } else {
        cout<<"Ingrese la cantidad a extraer"<<endl;
        cout<<" >> $";
        cin>>aux;
        cuentas[indice]->extraccion(aux);
        return;
    }  
}

void menuIntereses(){
    int indice, aux;

    cout<<"|ACREDITACION DE INTERESES|"<<endl;
    indice = buscarCuenta();
    if(indice<0){
        cout<<"Cuenta no encontrada, retornando al menu"<<endl;
        return;
    } else {
        cout<<"Ingrese cantidad de meses a acreditar"<<endl;
        cout<<" >> ";
        cin>>aux;
        cuentas[indice]->acreditar(aux);
        return;
    }  
}

void menuDatos(){
    int indice, aux;

    cout<<"|VER DATOS|"<<endl;
    indice = buscarCuenta();
    if(indice<0){
        cout<<"Cuenta no encontrada, retornando al menu"<<endl;
        return;
    } else {
        cout<<"|DATOS DE CUENTA|"<<endl;
        cout<<"1. Numero: "<<cuentas[indice]->getNumero()<<endl;
        cout<<"2. Saldo: "<<cuentas[indice]->getSaldo()<<endl;
        cout<<"3. Interes: "<<cuentas[indice]->getInteres()<<"%"<<endl;
        return;
    } 
}

int main(){
    int num;

    if(!cargado){
        carga();
    }
    
    while(true){
        system("cls");
        cout<<"|MENU DE GESTION|"<<endl;
        cout<<"1. DEPOSITAR"<<endl;
        cout<<"2. EXTRAER"<<endl;
        cout<<"3. ACREDITAR INTERESES"<<endl;
        cout<<"4. VER DATOS"<<endl;
        cout<<"X. SALIR"<<endl;
        cout<<endl;
        cin>>num;
        
        switch (num){
        case 1:
            menuDeposito();
            break;
        case 2:
            menuExtraccion();
            break;
        case 3:
            menuIntereses();
            break;
        case 4:
            menuDatos();
            break;
        default:
            delete cuentas;
            return 0;
        }
    }

}