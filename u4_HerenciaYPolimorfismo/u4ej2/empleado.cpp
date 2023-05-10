#include <iostream>
#include "empleado.h"
using namespace std;

Empleado::Empleado(){
    nombre="Indefinido";
    edad=0;
    salario=0.0f;
}
Empleado::Empleado(std::string name, short age, float salary){
    nombre=name;
    edad=age;
    salario=salary;
}
Empleado::~Empleado(){

}
string Empleado::getNombre(){
    return nombre;
}
short Empleado::getEdad(){
    return edad;
}
float Empleado::getSalario(){
    return salario;
}
void Empleado::setNombre(string name){
    nombre=name;
}
void Empleado::setEdad(short age){
    edad=age;
}
void Empleado::setSalario(float salary){
    salario=salary;
}