#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "persona.h"
using namespace std;

Persona::Persona(){
    nombre = "John Doe";
    fechaNacimiento[0] = 1;
    fechaNacimiento[1] = 1;
    fechaNacimiento[2] = 1970;
    edad = calcularEdad();
    dni = rand()%99999999+10000000;
    sexo = 'M';
    peso = 70;
    altura = 1.70;
}
Persona::Persona(string name, int* birth, char sex){
    nombre = name;
    fechaNacimiento[0] = birth[0];
    fechaNacimiento[1] = birth[1];
    fechaNacimiento[2] = birth[2];
    edad = calcularEdad();
    dni = rand()%99999999+10000000;
    sexo = sex;
    peso = 70;
    altura = 1.70;
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
    
}
bool Persona::esMayorDeEdad(){
    if(edad>=18){
        return true;
    }else{
        return false;
    }
}