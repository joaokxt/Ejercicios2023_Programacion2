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
Materia** Docente::getMaterias(Materia** materias, int lim){
     /*Array de punteros a materias*/
    anotadas = new Materia*[inscripciones]; 
    int i, j, k=0;
    for(i=0; i<lim; i++)
        if(materias[i]->getTitular() == this){
                anotadas[k]=materias[i];
                k++;
            }
    return anotadas;
}
void Docente::setTitulo(string degree){
    titulo=degree;
}
void Docente::inscripcion(Materia** materias, int code, int lim){
    int i, j, n;
    for(i=0;i<lim; i++)
        if(materias[i]->getCodigo()==code)
            materias[i]->setTitular(this);
    inscripciones++;
} 
            
