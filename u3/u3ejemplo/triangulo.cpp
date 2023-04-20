#include "triangulo.h"

Triangulo::Triangulo(int base, int altura){
    B=base;
    H=altura;
}

void Triangulo::setB(int base){
    B=base;
}
void Triangulo::setH(int altura){
    H=altura;
}
void Triangulo::superficie(){
    S=(B*H)/2;
}
int Triangulo::getB(){
    return B;
}
int Triangulo::getH(){
    return H;
}
int Triangulo::getS(){
    superficie();
    return S;
}