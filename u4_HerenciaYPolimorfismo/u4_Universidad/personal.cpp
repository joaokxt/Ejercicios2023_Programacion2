#include "personal.h"
using namespace std;

Personal::Personal() {
    dni=0;
    nombres="John";
    apellidos="Doe";
    mail="yahoo";
    inscripciones=0;
}
Personal::Personal(int id, string names, string surnames, string email){
    dni=id;
    nombres=names;
    apellidos=surnames;
    mail=email;
    inscripciones=0;
}
Personal::~Personal(){
    
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