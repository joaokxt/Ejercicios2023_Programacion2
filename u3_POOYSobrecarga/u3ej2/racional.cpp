#include "racional.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

Racional::Racional(){
    srand(time(NULL));
    numerador=rand()%100;
    denominador=rand()%100;
}
Racional::Racional(int num, int den){
    numerador=num;
    denominador=den;
}
Racional::~Racional(){

}
float Racional::getValor(){
    return numerador/denominador;
}
int Racional::getNumerador(){
    return numerador;
}
int Racional::getDenominador(){
    return denominador;
}
void Racional::setNumerador(int num){
    numerador=num;
}
void Racional::setDenominador(int den){
    denominador=den;
}
void Racional::operator++(){
    numerador+=denominador;
}
void Racional::operator--(){
    numerador-=denominador;
}
Racional* Racional::operator+(Racional* operando){
    int den, num1, num2, num;
    Racional* resultado;
    den = denominador*operando->getDenominador();
    num1 = numerador*operando->getDenominador();
    num2 = operando->getNumerador()*denominador;
    resultado = new Racional(num, den);
    return resultado;
}
Racional* Racional::operator-(Racional* operando){
    int den, num1, num2, num;
    Racional* resultado;
    den = denominador*operando->getDenominador();
    num1 = numerador*operando->getDenominador();
    num2 = operando->getNumerador()*denominador;
    num = num1-num2;
    resultado = new Racional(num, den);
    return resultado;
}
void Racional::operator+=(int operando){
    numerador+=denominador*operando;
}
void Racional::operator-=(int operando){
    numerador-=denominador*operando;
}
void Racional::simplificar(){
    int mcd = MCD(numerador, denominador);
    numerador/=mcd;
    denominador/=mcd;
}
int Racional::MCD(int a, int b){
    int resto, aux;
    if(a<b){
        aux=b;
        b=a;
        a=aux;
    }
    while(a%b!=0){
            resto=a%b;
            if(resto==0){
                return b;
            }else{
                a=b;
                b=resto;
            }
        }
}
