#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "reloj.h"
using namespace std;

int main() {
    int ing[3], i;
    for(i=0;i<3;i++){
        system("cls");
        cout<<"Ingrese el horario inicial del reloj: "<<endl;
        if(i==0){
            cout<<"__:__:__"<<endl;
            cout<<"^^n"<<endl;
            cout<<"H: ";
            cin>>ing[i];
        }
        if(i==1){
            cout<<ing[0]<<":__:__"<<endl;
            cout<<"   ^^"<<endl;
            cout<<"M: ";
            cin>>ing[i];
        }
        if(i==2){
            cout<<ing[0]<<":"<<ing[1]<<":__"<<endl;
            cout<<"      ^^"<<endl;
            cout<<"S: ";
            cin>>ing[i];
        }
    }
    system("cls");
    Reloj r(ing[0], ing[1], ing[2]);
    for(i=0;i<2;i++){
        system("cls");
        cout<<"Ingrese el horario de la alarma: "<<endl;
        if(i==0){
            cout<<"__:__:00"<<endl;
            cout<<"^^n"<<endl;
            cout<<"H: ";
            cin>>ing[i];
        }
        if(i==1){
            cout<<ing[0]<<":__:00"<<endl;
            cout<<"   ^^"<<endl;
            cout<<"M: ";
            cin>>ing[i];
        }
    }
    r.setAlarma(ing[0], ing[1]);
    while(true){
        system("cls");
        ++r;
        cout<<r.getHora()<<":"<<r.getMinuto()<<":"<<r.getSegundo()<<endl;
        if(r.alarma())
            cout<<"ALARMA"<<endl;
        Sleep(1000);
    }
}
