#include <iostream>
#include "empleado.h"
#include "comercial.h"
using namespace std;

Comercial::Comercial():Empleado(){
    comision=0;
}
Comercial::Comercial(string name, short age, float salary, short comission):Empleado(name, age, salary){
    comision=comission;
}
Comercial::~Comercial(){

}
short Comercial::getComision(){
    return comision;
}
void Comercial::setComision(short comission){
    comision=comission;
}
void Comercial::plus(){
    if(edad>30 && comision>12)
        salario+=3000;
    else
        cout<<"El comercial no reune los requisitos"<<endl;
}
string Comercial::toString(){
    string print;
    print="-=-=|COMERCIAL|=-=-\n1. Nombre: "+nombre+"\n2. Edad: "+to_string(edad)+"\n3. Salario: "+to_string(salario)+"\n4. Comercial: "+to_string(comision)+"%\n";
    return print;
}