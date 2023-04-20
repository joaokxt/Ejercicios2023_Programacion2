#include "persona.h"
#include <cmath>
#include <time.h>
#include <random>
using namespace std;

Persona::Persona() {
    nombre[0]='\0';
    edad=0;
    sexo='M';
    peso=0;
    altura=0;
    generaDNI();
}
Persona::Persona(string name, int age, char sex) {
    nombre=name;
    edad=age;
    sexo=sex;
    peso=0;
    altura=0;
    generaDNI();
}
Persona::Persona(string name, int age, char id[8], char sex, double weight, double height) {
    nombre=name;
    edad=age;
    sexo=sex;
    peso=weight;
    altura=height;
    generaDNI();
}
int Persona::calcularIMC() {
    double imc=peso/pow(altura,2);
    if(imc>=20)
        if(imc<=25)
            return 0;
        else
            return 1;
    else
        return -1;
}
bool Persona::esMayorDeEdad() {
    if(edad>=18)
        return true;
    else
        return false;
}
void Persona::generaDNI() {
    char *p;
    int i;
    srand(time(NULL));
    for(p=dni,i=0;i<8;p++,i++){
        *p=rand() % 58 + 48;
    }
}

void Persona::setNombre(int name) {
    nombre=name;
}
void Persona::setAltura(double height) {
    altura=height;
}
void Persona::setEdad(int age) {
    edad=age;
}
void Persona::setPeso(double weight) {
    peso=weight;
}
void Persona::setSexo(char sex) {
    sexo=sex;
}
string Persona::getNombre(){
    return nombre;
}
int Persona::getEdad() {
    return edad;
}
char* Persona::getDNI() {
    return dni;
}
char Persona::getSexo() {
    return sexo;
}
double Persona::getPeso() {
    return peso;
}
double Persona::getAltura() {
    return altura;
}
