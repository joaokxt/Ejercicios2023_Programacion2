#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Docente::Docente():Personal(){
    titulo="Sin titulo definido";
}
Docente::Docente(int id, std::string names, std::string surnames, std::string email, std::string degree):Personal(id, names ,surnames, email){
    titulo=degree;
} 
Docente::~Docente(){
    
}  
string Docente::getTitulo(){
    return titulo;
}
void Docente::setTitulo(string degree){
    titulo=degree;
}
void Docente::inscripcion(Materia** materias, int code, int lim){
    int i, j, n;
    for(i=0;i<lim; i++)
        if(materias[i]->getCodigo()==code){
            materias[i]->setTitular(this);
            anotadas[inscripciones]=materias[i];
            inscripciones++;
        }
            
} 
            
