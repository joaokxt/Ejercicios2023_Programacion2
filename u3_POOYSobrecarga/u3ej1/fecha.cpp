#include "fecha.h"

Fecha::Fecha() {
    dia=1;
    mes=1;
    anio=1900;
}
Fecha::Fecha(int day, int month, int year) {
    dia=day;
    mes=month;
    anio=year;
}
int Fecha::getAnio() {
    return anio;
}
int Fecha::getMes() {
    return mes;
}
int Fecha::getDia() {
    return dia;
}
void Fecha::incrementar(int dias) {
    if(dia==dias){
        dia=1;
        if(mes==12){
            mes=1;
            anio++;
        }else{
            mes++;
        }
    }else{
        dia++;
    }
}
void Fecha::operator++() {
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        incrementar(31);
    else if(mes==4 || mes==6 || mes==9 || mes==11)
        incrementar(30);
    else
        if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0)
            incrementar(29);
        else
            incrementar(28);
}
void Fecha::operator+(int dias){
    int i;
    for(i=0;i<dias;i++) {
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
            incrementar(31);
        else if(mes==4 || mes==6 || mes==9 || mes==11)
            incrementar(30);
        else
        if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0)
            incrementar(29);
        else
            incrementar(28);
    }
}