#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "cronometro.h"
using namespace std;

int main() {
    Cronometro crono = Cronometro();
    int aux;
    bool run, reset;
    reset=true;
    while(true){
        if(reset){
           cout<<"00:00:00"<<endl;
            cout<<"Ingrese algo para iniciar el cronometro >>> ";
            cin>>aux;
            run=true; 
        }
        do{
            system("cls");
            if(crono.getHora()<10)
                cout<<"0"<<crono.getHora();
            else
                cout<<crono.getHora();
            cout<<":";
            if(crono.getMinuto()<10)
                cout<<"0"<<crono.getMinuto();
            else
                cout<<crono.getMinuto();
            cout<<":";
            if(crono.getSegundo()<10)
                cout<<"0"<<crono.getSegundo();
            else
                cout<<crono.getSegundo()<<endl;
            ++crono;
            Sleep(1000);
            if(crono.getSegundo()==15){
                cout<<"Cronometro detenido"<<endl;
                run=false;
            }
        }while(run);
        cout<<"Desea resetear el cronometro o seguir? [0:Reset|1:Seguir|X:Salir]"<<endl;
        cout<<" >> ";
        cin>>aux;
        switch(aux){
            case 0:
                reset=true;
                crono.reset();
                break;
            case 1:
                reset=false;
                break;
            default:
                return 0;
        }
        run = true;
    }
    return 0;
}
