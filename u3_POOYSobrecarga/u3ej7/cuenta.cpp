#include "cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta(int number, float interest){
    numero=number;
    saldo=0;
    interes=interest;
}
Cuenta::~Cuenta(){
    
}
void Cuenta::setNumero(int number){
    numero=number;
}
void Cuenta::setSaldo(int amount){
    saldo=amount;
}
void Cuenta::setInteres(int interest){
    interes=interest;

}
int Cuenta::getNumero(){
    return numero;
}
float Cuenta::getSaldo(){
    return saldo;
}
float Cuenta::getInteres(){
    return interes;
}
void Cuenta::deposito(float cantidad){
    if(cantidad<=0){
        cout<<"Deposito invalido"<<endl;
        return;
    } else {
        saldo+=cantidad;
        return;
    }
}
void Cuenta::extraccion(float cantidad){
    if(saldo<cantidad){
        cout<<"Extraccion rechazada"<<endl;
        return;
    }else{
        saldo-=cantidad;
        return;
    }
}
void Cuenta::acreditar(int meses){
    if(meses<=0){
        cout<<"Acreditacion invalida"<<endl;
        return;
    } else {
        saldo+=saldo*meses*(interes/12);
        return;
    }
}
