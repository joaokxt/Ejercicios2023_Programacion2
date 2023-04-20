#include "reloj.h"
using namespace std;

Reloj::Reloj() {
    hora.h=0;
    hora.m=0;
    hora.s=0;
    alarma.h=12;
    alarma.m=0;
}
Reloj::Reloj(int hora, int minuto, int segundo) {
    hora.h=hora;
    hora.m=minuto;
    hora.s=segundo;
    alarma.h=12;
    alarma.m=0;
}
void Reloj::setAlarma(int hora, int minuto) {
    alarma.h=hora;
    alarma.m=minuto;
}
bool Reloj::alarma(){
    if(hora.h==alarma.h && hora.m==alarma.m)
        return true;
    return false;
}
void Reloj::operator++() {
    if(hora.s==59){
        hora.s=0;
        if(hora.m==59){
            hora.m=0;
            if(hora.h==23){
                hora.h=0;
            } else {
                hora.h++;
            }
        } else {
            hora.m++;
        }
    } else {
        hora.s++;
    }
}
int Reloj::getHora() {
    return hora.h;
}
int Reloj::getMinuto() {
    return hora.m;
}
int Reloj::getSegundo() {
    return hora.s;
}