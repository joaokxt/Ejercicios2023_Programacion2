#include <iostream>
#include <stdlib.h>
#include "racional.h"
using namespace std;

Racional *racional, *operando;
int opcion;

string mensaje(){
    return "Su racional es: " + to_string(racional->getNumerador()) + "/" + to_string(racional->getDenominador()) + " (" + to_string(racional->getValor()) + ")";
}

int main(){
    cout<<"RACIONALES"<<endl;
    cout<<"Desea ingresar el suyo o quiere generar uno aleatorio?"<<endl;
    cout<<"[0] Aleatorio | [1] Ingresar"<<endl;
    cout<<" >>> ";
    cin>>opcion;
    switch(opcion){
        case 0:
            do{
                system("cls");
                racional = new Racional();
                cout<<mensaje()<<endl;
                cout<<"Esta bien o quiere otro?"<<endl;
                cout<<"[0] Otro | [1] Esta bien"<<endl;
                cout<<" >>> ";
                cin>>opcion;
            }while(opcion!=1);
            break;
        case 1:
            system("cls");
            int num, den;
            cout<<"Ingrese numerador >>> ";
            cin>>num;
            cout<<"Ingrese denominador >>> ";
            cin>>den;
            racional = new Racional(num, den);
    }
    system("cls");
    cout<<mensaje()<<endl;
    cout<<"Se le sumara 1"<<endl;
    ++*racional;
    cout<<mensaje()<<endl;
    cout<<"Se le restara 1"<<endl;
    --*racional;
    cout<<mensaje()<<endl;
    cout<<"Ingrese algo para continuar >>> ";
    cin>>opcion;
    cout<<mensaje()<<endl;
    cout<<"Ingrese un entero para sumarle a su racional >>> ";
    cin>>opcion;
    *racional+=opcion;
    cout<<mensaje()<<endl;
    cout<<"Ingrese un entero para restarle a su racional >>> ";
    cin>>opcion;
    *racional-=opcion;
    cout<<mensaje()<<endl;

    operando = new Racional();
    cout<<"NUEVO RACIONAL! -> "<<operando->getNumerador()<<"/"<<operando->getDenominador()<<" ("<<operando->getValor()<<")"<<endl;
    cout<<"Se lo sumara al suyo"<<endl;
    racional = *racional + operando;
    cout<<mensaje()<<endl;
    operando = new Racional();
    cout<<"NUEVO RACIONAL! -> "<<operando->getNumerador()<<"/"<<operando->getDenominador()<<" ("<<operando->getValor()<<")"<<endl;
    cout<<"Se lo restara al suyo"<<endl;
    racional = *racional - operando;
    cout<<mensaje()<<endl;
    racional->simplificar();
    cout<<mensaje()<<endl;
    cout<<"FIN DE PROGRAMA!"<<endl;
    return 0;
}