#include <iostream>
#include "cuenta.h"
using namespace std;

int main(){
    string nombre;
    char ingresado;
    int opcion;
    double cantidad;
    Cuenta *account;
    cout<<"-=-=-=|BANCO SANTANDER|=-=-=-"<<endl;
    cout<<"Ingrese el nombre del titular de la cuenta --> ";
    cin>>nombre;
    fflush(stdin);
    do{
        cout<<"Desea informar el monto en cuenta? [S/N] --> ";
        cin>>ingresado;
        if(ingresado==83 || ingresado==115){
            cout<<"Monto --> $";
            cin>>cantidad;
            account=new Cuenta(nombre, cantidad);
        } else
            account=new Cuenta(nombre);
    }while(ingresado!=83 && ingresado!=115 && ingresado!=78 && ingresado!=110);
    cout<<"\n-=-=-=|MENU DE ACCIONES|=-=-=-"<<endl;
    cout<<"[1] Cambiar titular"<<endl;
    cout<<"[2] Cambiar cantidad"<<endl;
    cout<<"[3] Ingresar"<<endl;
    cout<<"[4] Retirar"<<endl;
    cout<<"Ingrese su opcion --> ";
    cin>>opcion;
    cout<<endl;
    switch (opcion) {
        case 1:
            cout<<"Nuevo titular --> ";
            cin>>nombre;
            account->setTitular(nombre);
            break;
        case 2:
            cout<<"Nueva cantidad --> $";
            cin>>cantidad;
            account->setCantidad(cantidad);
            break;
        case 3:
            cout<<"Monto a ingresar --> $";
            cin>>cantidad;
            account->ingresar(cantidad);
            break;
        case 4:
            cout<<"Monto a retirar --> $";
            cin>>cantidad;
            account->retirar(cantidad);
            break;
    }
    cout<<endl;
    cout<<"-=-=-=|RESUMEN DE CUENTA|=-=-=-"<<endl;
    cout<<"Titular: "<<account->getTitular()<<endl;
    cout<<"Cantidad: $"<<account->getCantidad()<<endl;
    delete account;
    return 0;
}
