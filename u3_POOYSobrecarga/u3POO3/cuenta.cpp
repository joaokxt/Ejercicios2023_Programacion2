//
// Created by joaok on 13/04/2023.
//
#include "cuenta.h"
using namespace std;

Cuenta::Cuenta(std::string nombre) {
    titular=nombre;
}
Cuenta::Cuenta(std::string nombre, double monto) {
    titular= nombre;
    cantidad=monto;
}
void Cuenta::setTitular(std::string nuevoTitular) {
    titular=nuevoTitular;
}
void Cuenta::setCantidad(double nuevaCantidad) {
    cantidad=nuevaCantidad;
}
string Cuenta::getTitular() {
    return titular;
}
double Cuenta::getCantidad() {
    return cantidad;
}
void Cuenta::ingresar(double ingreso) {
    cantidad+=ingreso;
}
void Cuenta::retirar(double egreso) {
    cantidad-=egreso;
    if(cantidad<0)
        cantidad=0;
}