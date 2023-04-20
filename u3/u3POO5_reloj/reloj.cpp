#include "reloj.h"
using namespace std;

Reloj::Reloj() {
    h=0;
    m=0;
    s=0;
    alarmaH=12;
    alarmaM=0;
}
Reloj::Reloj(int hora, int minuto, int segundo) {
    h=hora;
    m=minuto;
    s=segundo;
    alarmaH=12;
    alarmaM=0;
}
void Reloj::setAlarma(int hora, int minuto) {
    alarmaH=hora;
    alarmaM=minuto;
}
bool Reloj::alarma(){
    if(h==alarmaH && m==alarmaM)
        return true;
    return false;
}
void Reloj::operator++() {
    if(s==59){
        s=0;
        if(m==59){
            m=0;
            if(h==23){
                h=0;
            } else {
                h+=1;
            }
        } else {
            m+=1;
        }
    } else {
        s+=1;
    }
}
int Reloj::getHora() {
    return h;
}
int Reloj::getMinuto() {
    return m;
}
int Reloj::getSegundo() {
    return s;
}