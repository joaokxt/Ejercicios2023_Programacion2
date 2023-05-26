#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>
#include "persona.h"
using namespace std;

Persona::Persona(){
    nombre = "SIN ESPECIFICAR";
    fechaNacimiento[0] = 0;
    fechaNacimiento[1] = 0;
    fechaNacimiento[2] = 0;
    edad = calcularEdad();
    dni = 0;
    sexo = 'X';
    peso = 0;
    altura = 0;
}
Persona::Persona(string name, int* birth, char sex){
    nombre = name;
    fechaNacimiento[0] = birth[0];
    fechaNacimiento[1] = birth[1];
    fechaNacimiento[2] = birth[2];
    edad = calcularEdad();
    dni = 0;
    sexo = sex;
    peso = 0;
    altura = 0;
}
Persona::Persona(string name, int* birth, int id, char sex, float weight, float height){
    nombre = name;
    fechaNacimiento[0] = birth[0];
    fechaNacimiento[1] = birth[1];
    fechaNacimiento[2] = birth[2];
    edad = calcularEdad();
    dni = id;
    sexo = sex;
    peso = weight;
    altura = height;
}
Persona::~Persona(){
    delete fechaNacimiento;
}
void Persona::setNombre(string name){
    nombre=name;
}
void Persona::setNacimiento(int* birth){
    fechaNacimiento[0] = birth[0];
    fechaNacimiento[1] = birth[1];
    fechaNacimiento[2] = birth[2];
}
void Persona::setDni(int id){
    dni=id;
}
void Persona::setSexo(char sex){
    sexo=sex;
}
void Persona::setPeso(float weight){
    peso=weight;
}
void Persona::setAltura(float height){
    altura=height;
}
string Persona::getNombre(){
    return nombre;
}
int* Persona::getNacimiento(){
    return fechaNacimiento;
}
int Persona::getEdad(){
    return edad;
}
int Persona::getDni(){
    return dni;
}
char Persona::getSexo(){
    return sexo;
}
float Persona::getPeso(){
    return peso;
}
float Persona::getAltura(){
    return altura;
}
float Persona::calcularIMC(){
    float imc;
    imc = peso/pow(altura,2);
    return imc;
}
int Persona::calcularEdad(){
    int edad;
    time_t t = time(0);
    tm* now = localtime(&t);
    edad = (now->tm_year+1900)-fechaNacimiento[2];
    if(fechaNacimiento[1]<(now->tm_mon+1)){
        return edad;
    } else if (fechaNacimiento[1]==(now->tm_mon+1)){
        if(fechaNacimiento[0]<=(now->tm_mday)){
            return edad;
        } else {
            return edad-1;
        }
    } else {
        return edad-1;
    }
}
bool Persona::esMayorDeEdad(){
    if(edad>=18){
        return true;
    }else{
        return false;
    }
}