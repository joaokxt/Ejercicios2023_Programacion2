#include <iostream>
#include "empleado.h"
#include "comercial.h"
#include "repartidor.h"
using namespace std;

Comercial comercial;
Repartidor repartidor;

void altaRepartidor(){
    string name;
    short age, zone;
    float salary;
    cout<<"Nombre: ";
    cin>>name;
    cout<<"Edad: ";
    cin>>age;
    cout<<"Salario: ";
    cin>>salary;
    cout<<"Zona: ";
    cin>>zone;
    repartidor = Repartidor(name, age, salary, zone);
}

void altaComercial(){
    string name;
    short age, comission;
    float salary;
    cout<<"Nombre: ";
    cin>>name;
    cout<<"Edad: ";
    cin>>age;
    cout<<"Salario: ";
    cin>>salary;
    cout<<"Comision: ";
    cin>>comission;
    comercial = Comercial(name, age, salary, comission);
}

int main(){
    cout<<"BIENVENIDO"<<endl;
    cout<<"PRIMERO DEMOS DE ALTA AL REPARTIDOR"<<endl;
    altaRepartidor();
    cout<<"AHORA DEMOS DE ALTA AL COMERCIAL"<<endl;
    altaComercial();
    cout<<"VEAMOS LOS DATOS"<<endl;
    string string1 = repartidor.toString();
    string string2 = comercial.toString();
    cout<<string1<<endl;
    cout<<string2<<endl;
    cout<<"VERIFIQUEMOS SI EL REPARTIDOR PUEDE RECIBIR PLUS"<<endl;
    repartidor.plus();
    cout<<"VERIFIQUEMOS SI EL COMERCIAL PUEDE RECIBIR PLUS"<<endl;
    comercial.plus();
    cout<<"VEAMOS LOS DATOS ACTUALIZADOS"<<endl;
    cout<<repartidor.toString();
    cout<<comercial.toString();
    return 0;
}
