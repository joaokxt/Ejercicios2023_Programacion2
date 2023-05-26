#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Materia::Materia(){
    int i, j;
    nombre="Sin Nombre";
    codigo = 0;
    for(i=0;i<10;i++){
        for(j=0;j<4;j++)
            notas[i][j]=0;
    }
    inscriptos=0;
    titular=nullptr;
}
Materia::Materia(int code, string name){
    int i, j;
    nombre = name;
    codigo = code;
    for(i=0;i<10;i++){
        for(j=0; j<4; j++)
            notas[i][j]=0;
    }
    inscriptos=0;
    titular=nullptr;
}
Materia::~Materia(){
    delete titular;
}
int Materia::getCodigo(){
    return codigo;
}
std::string Materia::getNombre(){
    return nombre;
}
int* Materia::getNotas(int dni){
    int *result, i, j;
    result = new int [3];
    for(i=0;i<inscriptos;i++)
        if(notas[i][0]==dni)
            for(j=0;j<3; j++)
                result[j]=notas[i][j+1];
    return result;
}
Docente* Materia::getTitular(){
    return titular;
}
int Materia::getInscriptos(){
    return inscriptos;
}
void Materia::setNotas(int nota, int dni){
    int i, j;
    for(i=0;i<100;i++)
        if(notas[i][0]==dni)
            for(j=1;j<5;j++)
                if(notas[i][j]==0){
                    notas[i][j]=nota;
                    return;
                }
}
void Materia::setAlumno(int dni){
    notas[inscriptos][0]=dni;
    inscriptos++;  
}
void Materia::setTitular(Docente* docente){
    titular = docente;
}
bool Materia::hayCupo(){
    if(inscriptos==100)
        return false;
    return true;
}
bool Materia::hayTitular(){
    if(titular==NULL)
        return false;
    return true;
}