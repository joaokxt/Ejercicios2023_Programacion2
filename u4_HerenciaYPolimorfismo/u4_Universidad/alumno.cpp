#include "personal.h"
#include "alumno.h"
#include "materia.h"
#include "docente.h"
using namespace std;

Alumno::Alumno():Personal(){
    carrera="Sin carrera especificada";
    edad=0;
}
Alumno::Alumno(int id, std::string names, std::string surnames, std::string email, std::string career, int age):Personal(id, names, surnames, email){
    carrera=career;
    edad=age;
}
Alumno::~Alumno(){

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
void Alumno::inscripcion(Materia** materias, int code, int lim){
    int i;
    for(i=0;i<lim; i++)
        if(materias[i]->getCodigo()==code){
            materias[i]->setAlumno(this);
            anotadas[inscripciones]=materias[i];
            inscripciones++;
        }
}
void Alumno::cargarNota(int code, int nota){
    int i;
    for(i=0;i<inscripciones; i++)
        if(anotadas[i]->getCodigo()==code)
            anotadas[i]->setNotas(nota, dni);
}
