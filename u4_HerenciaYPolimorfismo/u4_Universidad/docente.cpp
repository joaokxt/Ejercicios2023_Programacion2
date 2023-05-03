#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Docente::Docente():Personal(){
    titulo="Sin titulo definido";
}
Docente::Docente(int id, std::string names, std::string surnames, std::string mail, std::string degree):Personal(id, names ,surnames, mail){
    titulo=degree;
}   
string Docente::getTitulo(){
    return titulo;
}
void Docente::setTitulo(string degree){
    titulo=degree;
}
void Docente::inscripcion(Materia** materias, int code){
    int i, j, n;
    for(i=0;i<100; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setTitular(this);
} 
            
