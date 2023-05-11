#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "password.h"
using namespace std;

Password::Password(){
    longitud=8;
}
Password::Password(int length){
    longitud=length;
}
Password::~Password(){
    delete[] contrasena;
}
void Password::generarContrasena(){
    contrasena = new char[longitud];
    for(int i=0;i<longitud;i++){
        contrasena[i]=rand()%122+33;
    }
}
bool Password::esFuerte(){
    int may, min, num;
    for(int i=0; i<longitud; i++){
        if(contrasena[i]>=65 && contrasena[i]<=90){
            may++;
        }
        if(contrasena[i]>=97 && contrasena[i]<=122){
            min++;
        }
        if(contrasena[i]>=48 && contrasena[i]<=57){
            num++;
        }
    }
    if(may>2 && min>1 && num>5)
        return true;
    else 
        return false;
}
char* Password::getContrasena(){
    return contrasena;
}
int Password::getLongitud(){
    return longitud;
}
void Password::setLongitud(int length){
    longitud=length;
}