#include "materia.h"
using namespace std;

Materia::Materia(int *code, string name){
    int *p, *q, i;
    for(p=codigo, q=code, i=0;i<7;p++, q++, i++)
        *p=*q;
    notas = new int[5];
    cargadas=0;
}
void Materia::setNotas(int nota){
    notas[cargadas]=nota;
    cargadas++;
}
int* Materia::getNotas(){
    /*Para no retornar el array de 100*/
    int *result, *p, i;
    result = new int [cargadas];
    for(p=notas, i=0;i<cargadas;p++,i++)
        *(result+i)=*p;
    return result;
}