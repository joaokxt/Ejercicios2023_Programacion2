#include <iostream>
#include <stdlib.h>
#include "fecha.h"
using namespace std;

int main() {
    Fecha *f;
    char ing;
    int date[3], i, j, n;
    bool apagado;
    do{
        cout<<"Desea ingresar una fecha de inicio? [S/N] >>";
        cin>>ing;
        if(ing==83 || ing==115){
            for(i=0;i<3;i++){
                system("cls");
                cout<<"Ingrese la fecha:"<<endl;
                while(j<i*3){
                    cout<<" ";
                    j++;
                }
                cout<<"VV"<<endl;
                switch(i){
                    case 0:
                        cout<<"  /  /  "<<endl;
                        cout<<"DD: ";
                        cin>>date[i];
                        break;
                    case 1:
                        cout<<date[0]<<"/  /  "<<endl;
                        cout<<"MM: ";
                        cin>>date[i];
                        break;
                    case 2:
                        cout<<date[0]<<"/"<<date[1]<<"/  "<<endl;
                        cout<<"YYYY: ";
                        cin>>date[i];
                        break;
                }
            }
            f=new Fecha(date[0], date[1], date[2]);
        }else if(ing==78 || ing==110){
            f=new Fecha();
        }
    }while(ing!=83 && ing!=115 && ing!=78 && ing!=110);

    while(apagado==false){
        system("cls");
        cout<<f->getDia()<<"/"<<f->getMes()<<"/"<<f->getAnio()<<endl;
        cout<<"Seleccione una accion: "<<endl;
        cout<<"1. (+1) dia\n2. (+n) dias\n3. Salir\n>>>"<<endl;
        cin>>n;
        switch(n){
            case 1:
                ++*f;
                break;
            case 2:
                system("cls");
                cout<<"n=";
                cin>>n;
                *f+n;
                break;
            case 3:
                apagado=true;
                break;
            default:
                cout<<"Opcion no existe"<<endl;
        }
    }
    delete f;
    return 0;
}
