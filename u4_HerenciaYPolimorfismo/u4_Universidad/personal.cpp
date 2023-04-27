#include "personal.h"
using namespace std;

Personal::Personal() {
    dni={0,0,0,0,0,0,0,0};
    nombres=John;
    apellidos=Doe;
}
Personal::Personal(int *id, int names, int surnames) {
    int *init = dni;
    int *final;
    final = &dni[7];
    while(init<=final){
        *init=*id;
        init++;
        id++;
    }
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
void Personal::setDNI(int *id) {
    int *init = dni;
    int *final;
    final = &dni[7];
    while(init<=final){
        *init=*id;
        init++;
        id++;
    }
}
void Personal::setNombres(int names) {
    nombres=names;
}
void Personal::setApellidos(int surnames) {
    apellidos=surnames;
}