//
// Created by joaok on 11/05/2023.
//

#include "sucursal.h"
#include "caja_seguridad.h"
using namespace std;

Sucursal::Sucursal():Banco(){
    numero=0;
    responsable="Sin definir";
    caja = new CajaSeguridad();
}
Sucursal::Sucursal(string name, int num, string resp):Banco(name){
    numero=num;
    responsable=resp;
    caja = new CajaSeguridad();
}
Sucursal::~Sucursal(){
    delete caja;
}
int Sucursal::getNumero(){
    return numero;
}
string Sucursal::getResponsable() {
    return responsable;
}
CajaSeguridad* Sucursal::getCaja() {
    return caja;
}