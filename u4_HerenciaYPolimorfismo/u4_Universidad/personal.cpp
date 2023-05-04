#include "personal.h"
#include "materia.h"
using namespace std;

Personal::Personal() {
    dni=0;
    nombres="John";
    apellidos="Doe";
    mail="yahoo";
    inscripciones=0;
    anotadas = new Materia*[10];
}
Personal::Personal(int id, string names, string surnames, string email){
    dni=id;
    nombres=names;
    apellidos=surnames;
    mail=email;
    inscripciones=0;
    anotadas = new Materia*[10];
}
Personal::~Personal(){
    for(int i=0;i<10;i++)
        delete anotadas[i];
}
int Personal::getDNI() {
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
int Personal::getInscripciones(){
    return inscripciones;
}
Materia** Personal::getMaterias(){
    Materia** retorno;
    retorno = new Materia*[inscripciones];
    for(int i=0; i<inscripciones; i++)
        retorno[i]=anotadas[i];
    return retorno;
}
void Personal::setDNI(int id) {
    dni=id;
}
void Personal::setNombres(string names) {
    nombres=names;
}
void Personal::setApellidos(string surnames) {
    apellidos=surnames;
}
void Personal::setMail(string email){
    mail=email;
}