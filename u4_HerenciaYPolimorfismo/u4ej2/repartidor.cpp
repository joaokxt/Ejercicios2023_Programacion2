#include <iostream>
#include "empleado.h"
#include "repartidor.h"
using namespace std;

Repartidor::Repartidor():Empleado(){
    zona=0;
}
Repartidor::Repartidor(std::string name, short age, float salary, short zone):Empleado(name,age,salary){
    zona=zone;
}
Repartidor::~Repartidor(){

}
short Repartidor::getZona(){
    return zona;
}
void Repartidor::setZona(short zone){
    zona=zone;
}
void Repartidor::plus(){
    if(edad<25 && zona==3)
        salario+=3000;
    else
        cout<<"El repartidor no reune los requisitos"<<endl;
}
string Repartidor::toString(){
    string print;
    print="-=-=|REPARTIDOR|=-=-\n1. Nombre: "+nombre+"\n2. Edad: "+to_string(edad)+"\n3. Salario: "+to_string(salario)+"\n4. Zona: "+to_string(zona)+"\n";
    return print;
}
