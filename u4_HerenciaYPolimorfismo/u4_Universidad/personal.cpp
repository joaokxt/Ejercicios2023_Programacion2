#include "personal.h"
using namespace std;

Personal::Personal() {
    /*Forma 1 con punteros*/
    for(int *p=&dni[0];p<&dni[7];p++)
        *p=0;
    nombres="John";
    apellidos="Doe";
}
Personal::Personal(int *id, string names, string surnames, string mail){
    /*Forma 2 con punteros*/
    int *p, *q, i;
    for(p=dni, q=id, i=0;i<7;p++, q++, i++)
        *p=*q;
    nombres=names;
    apellidos=surnames;
}
int* Personal::getDNI() {
    return dni;
}
std::string Personal::getNombres() {
    return nombres;
}
std::string Personal::getApellidos() {
    return apellidos;
}
std::string Personal::getMail(){
    return mail;
}
void Personal::setDNI(int *id) {
    /*Forma 3 con punteros*/
    int *init = dni;
    int *final;
    final = &dni[7];
    while(init<=final){
        *init=*id;
        init++;
        id++;
    }
}
void Personal::setNombres(string names) {
    nombres=names;
}
void Personal::setApellidos(string surnames) {
    apellidos=surnames;
}
void Personal::setMail(string mail){
    mail=mail;
}