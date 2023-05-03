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
Materia** Alumno::getMaterias(Materia** materias, int lim){
    Materia** anotadas;
    anotadas = new Materia*[inscripciones];
    int i, j, k=0;
    for(i=0; i<lim; i++)
        for(j=0;j<materias[i]->getInscriptos();j++)
            if(materias[i]->getAlumnos()[j]->getDNI() == dni){
                anotadas[k]=materias[i];
                k++;
            }
    return anotadas;
}
void Alumno::setCarrera(string career){
    carrera=career;
}
void Alumno::setEdad(int age){
    edad=age;
}
void Alumno::inscripcion(Materia** materias, int code, int lim){
    int i, j, n;
    for(i=0;i<lim; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setAlumno(this);
    inscripciones++;
}
void Alumno::cargarNota(Materia** materias, int code, int nota, int lim){
    int i, j, n;
    for(i=0;i<lim; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setNotas(nota, dni);
}
