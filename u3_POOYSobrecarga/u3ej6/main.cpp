#include <iostream>
#include <time.h>
#include "password.h"
using namespace std;

int main(){
    srand(time(NULL));
    int ing;
    Password* p;
    cout<<"* Desea especificar la longitud de la contrasenia? [1. Si/ X.No]"<<endl;
    cin>>ing;
    if(ing!=1){
        cout<<"* La longitud se definio como 8 caracteres"<<endl;
        p=new Password();
    } else if(ing==1){
        cout<<"* Ingrese la longitud >>> ";
        cin>>ing;
        p = new Password(ing);
    } 
    p->generarContrasena();
    cout<<"* Contrasena atribuida: "<<p->getContrasena();
    cout<<"* Es fuerte: ";
    if(p->esFuerte()==true){
        cout<<"SI"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
} 