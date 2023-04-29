#include "personal.h"
#include "alumno.h"
#include "materia.h"
using namespace std;

Alumno::Alumno():Personal(){
    carrera="Ninguna";
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
void Alumno::inscripcion(Materia** materias, char* code, string name){
    int i;
    for(i=0;i<100; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setAlumno(this);
    inscripto++;
}
void Alumno::cargarNota(Materia** materias, char* code, int nota){
    int i;
    for(i=0;i<100; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setNotas(nota, dni);
}