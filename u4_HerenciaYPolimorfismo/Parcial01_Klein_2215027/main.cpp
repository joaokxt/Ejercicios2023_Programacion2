#include <iostream>
#include "banco.h"
#include "sucursal.h"
#include "caja_seguridad.h"
using namespace std;

int main(){
    Sucursal* sucursal;
    string name, resp;
    int num;

    cout<<"-=-=|REGISTRAR SUCURSAL|=-=-"<<endl;
    cout<<"Nombre del banco: ";
    cin>>name;
    cout<<"Numero de sucursal: ";
    cin>>num;
    cout<<"Nombre de responsable: ";
    cin>>resp;

    sucursal =  new Sucursal(name, num, resp);

    cout<<"\n-=-=|DATOS SUCURSAL|=-=-"<<endl;
    cout<<"Banco: "<<sucursal->getNombre()<<endl;
    cout<<"Numero de sucursal: "<<sucursal->getNumero()<<endl;
    cout<<"Responsable: "<<sucursal->getResponsable()<<endl;
    cout<<"Codigo de caja: "<<sucursal->getCaja()->getCodigo();
}