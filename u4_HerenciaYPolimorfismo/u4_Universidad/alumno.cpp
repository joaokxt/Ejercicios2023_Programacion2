#include "alumno.h"
#include "materia.h"
using namespace std;

Alumno::Alumno(int *id, std::string names, std::string surnames, std::string mail, std::string career, int age):Personal(id, names, surnames, mail){
    carrera=career;
    edad=age;
    inscripto=0;
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
    materias[indice-1].setNotas(nota);
}