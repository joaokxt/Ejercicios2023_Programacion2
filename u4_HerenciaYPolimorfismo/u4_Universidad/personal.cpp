#include "personal.h"
using namespace std;

Personal::Personal() {
    dni=0;
    nombres="John";
    apellidos="Doe";
}
Personal::Personal(int id, string names, string surnames, string mail){
    dni=id;
    nombres=names;
    apellidos=surnames;
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
void Personal::setDNI(int id) {
    dni=id;
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