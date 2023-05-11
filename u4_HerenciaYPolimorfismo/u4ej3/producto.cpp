#include <iostream>
#include <string.h>
#include "producto.h"
using namespace std;

Producto::Producto(){
    nombre = new char[20];
    precio = 0.0f;
}
Producto::Producto(char* name, float price){
    nombre = new char[strlen(name)+1];
    strcpy(nombre, name);
    precio = price;
}
Producto::~Producto(){
    delete[] nombre;
}
char* Producto::getNombre(){
    return nombre;
}
float Producto::getPrecio(){
    return precio;
}
void Producto::setNombre(char* name){
    delete[] nombre;
    nombre = new char[strlen(name)+1];
    strcpy(nombre, name);
}
void Producto::setPrecio(float price){
    precio=price;
}