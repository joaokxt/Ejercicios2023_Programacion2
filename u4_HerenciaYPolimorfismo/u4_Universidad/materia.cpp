#include "personal.h"
#include "alumno.h"
#include "docente.h"
#include "materia.h"
using namespace std;

Materia::Materia(char *code, string name){
    char *p, *q;
    int i, j;
    codigo = new char[8];
    nombre=name;
    for(p=codigo, q=code, i=0;i<7;p++, q++, i++)
        *p=*q;
    notas = new int*[100];
    for(i=0;i<100;i++){
        alumnos[i] = nullptr;
        notas[i] = new int[5];
        for(j=0; j<5; j++)
            notas[i][j]=0;
    }
    titular=nullptr;
    inscriptos=0;
}
char* Materia::getCodigo(){
    return codigo;
}
std::string Materia::getNombre(){
    return nombre;
}
int* Materia::getNotas(int dni){
    int *result, *p, i, j;
    result = new int [4];
    for(i=0;i<100;i++)
        if(notas[i][0]==dni)
            for(p=0,j=0;j<4;p++, j++)
                result[j]=notas[i][j+1];
    return result;
}
Alumno** Materia::getAlumnos(){
    return alumnos;
}
Docente* Materia::getTitular(){
    return titular;
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
void Materia::setAlumno(Alumno* alumno){
    alumnos[inscriptos]=alumno;
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
    if(titular==nullptr)
        return false;
    return true;
}