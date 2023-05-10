#include <iostream>
#include "contenedor.h"
using namespace std;

Contenedor::Contenedor(){
    cantidadActual=0;
    cantidadMaxima=0;
    cantidadMinima=0;
    codigo=0;
    nombre="indefinido";
}
Contenedor::Contenedor(int code, std::string name, float maximum, float minimum){
    codigo=code;
    nombre=name;
    cantidadMaxima=maximum;
    cantidadActual=cantidadMaxima;
    cantidadMinima=minimum;
}
Contenedor::~Contenedor(){

}
int Contenedor::getCodigo(){
    return codigo;
}
string Contenedor::getNombre(){
    return nombre;
}
float Contenedor::getCantidadActual(){
    return cantidadActual;
}
float Contenedor::getCantidadMinima(){
    return cantidadMinima;
} 
float Contenedor::getCantidadMaxima(){
    return cantidadMaxima;
}
void Contenedor::setCodigo(int code){
    codigo=code;
}
void Contenedor::setCantidadActual(float amount){
    cantidadActual=amount;
}
void Contenedor::setCantidadMaxima(float maximum){
    cantidadMaxima=maximum;
}
void Contenedor::setCantidadMinima(float minimum){
    cantidadMinima=minimum;
}
void Contenedor::deposito(float amount){
    if(cantidadActual==cantidadMaxima){
        cout<<"El contenedor ya esta lleno!"<<endl;
        return;
    } else if((cantidadActual+amount)>cantidadMaxima){
        cout<<"Se quiere llenar por encima del maximo!"<<endl;
        return;
    } else{
        cantidadActual+=amount;
        return;
    }
}
void Contenedor::extraccion(float amount){
    if(cantidadActual==cantidadMinima){
        cout<<"El contenedor ya esta al minimo!"<<endl;
        return;
    } else if((cantidadActual-amount)<cantidadMinima){
        cout<<"Se quiere extraer por debajo del minimo!"<<endl;
        return;
    } else{
        cantidadActual-=amount;
        return;
    }
}