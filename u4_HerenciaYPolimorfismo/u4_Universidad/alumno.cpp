#include "alumno.h"
#include "materia.h"
using namespace std;

Alumno::Alumno():Personal(){
    carrera="Ninguna";
    edad=0;
    inscripto=0;
}
Alumno::Alumno(int *id, std::string names, std::string surnames, std::string mail, std::string career, int age):Personal(id, names, surnames, mail){
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
Materia** Alumno::getMateria(){
    return materias;
}
void Alumno::setCarrera(string career){
    carrera=career;
}
void Alumno::setEdad(int age){
    edad=age;
}
void Alumno::inscripcion(int *code, string name){
    materias[inscripto]=new Materia(code, name);
    inscripto++;
}
void Alumno::cargarNota(int indice, int nota){
    materias[indice-1]->setNotas(nota);
}