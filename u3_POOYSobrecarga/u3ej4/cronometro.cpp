#include "cronometro.h"
using namespace std;

Cronometro::Cronometro(){
    h=0;
    m=0;
    s=0;
}
void Cronometro::operator++() {
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
int Cronometro::getHora() {
    return h;
}
int Cronometro::getMinuto() {
    return m;
}
int Cronometro::getSegundo() {
    return s;
}
void Cronometro::reset(){
    h=0;
    m=0;
    s=0;
}