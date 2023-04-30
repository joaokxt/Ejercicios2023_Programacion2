#include "personal.h"
#include "alumno.h"
#include "materia.h"
#include "docente.h"
using namespace std;

Alumno::Alumno():Personal(){
    carrera="Sin carrera especificada";
    edad=0;
    inscripto=0;
}
Alumno::Alumno(int id, std::string names, std::string surnames, std::string mail, std::string career, int age):Personal(id, names, surnames, mail){
    carrera=career;
    edad=age;
    inscripto=0;
}
string Alumno::getCarrera(){
    return carrera;
}
int Alumno::getEdad(){
    return edad;
}
void Alumno::setCarrera(string career){
    carrera=career;
}
void Alumno::setEdad(int age){
    edad=age;
}
void Alumno::inscripcion(Materia** materias, char* code){
    int i, j, n;
    for(i=0;i<100; i++){
        n=0;
        for(j=0;j<8;j++){
            if(materias[i]->getCodigo()[j]==code[j])
                n++;
            if(n==8)
                materias[i]->setAlumno(this);
        } 
    }
    inscripto++;
}
void Alumno::cargarNota(Materia** materias, char* code, int nota){
    int i, j, n;
    for(i=0;i<100; i++){
        n=0;
        for(j=0;j<8;j++){
            if(materias[i]->getCodigo()[j]==code[j])
                n++;
            if(n==8)
                materias[i]->setNotas(nota, dni);
        } 
    }
}   