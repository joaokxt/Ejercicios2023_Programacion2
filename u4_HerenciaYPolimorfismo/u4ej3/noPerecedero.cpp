#include <iostream>
#include <string.h>
#include "producto.h"
#include "noPerecedero.h"
using namespace std;

NoPerecedero::NoPerecedero():Producto(){
    tipo = new char[20];
}
NoPerecedero::NoPerecedero(char* name, float price, char* type):Producto(name,price){
    tipo=new char[strlen(type)+1];
    strcpy(tipo, type);
}
NoPerecedero::~NoPerecedero(){
    delete[] tipo;
}
char* NoPerecedero::getTipo(){
    return tipo;
}
void NoPerecedero::setTipo(char* type){
    delete[] tipo;
    tipo=new char[strlen(type)+1];
    strcpy(tipo, type);
}
float NoPerecedero::calcularMonto(int amount){ 
    return precio*amount;
}