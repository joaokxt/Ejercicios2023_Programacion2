#include "alumno.h"

alumno::alumno(char name[], int key, float marks[]) {
    char *p, *q;
    float *a, *b;
    int i;
    for(p=nombre,q=name,i=0;i<100;*p++=*q++,i++);
    clave=key;
    for(a=notas,b=marks,i=0;i<3;*a++=*b++,i++);
    for(i=0;i<3;i++)
        notaFinal+=notas[i];
    notaFinal/=3;
}
char* alumno::getNombre(){
    return nombre;
}
int alumno::getClave(){
    return clave;
}
float* alumno::getNotas(){
    return notas;
}
float alumno::getNotaFinal() {
    return notaFinal;
}
bool alumno::getAprobado() {
    if(notaFinal>=4){
        aprobado=true;
        return aprobado;
    } else {
        return aprobado;
    }
}
