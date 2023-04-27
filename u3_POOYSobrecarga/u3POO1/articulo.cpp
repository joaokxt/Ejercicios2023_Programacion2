#include "articulo.h"

articulo::articulo(float costo){
    c=costo;
}
void articulo::incremento(float incremento){
    c+=incremento;
}
void articulo::setCosto(float costo){
    c=costo;
}
float articulo::getCosto(){
    return c;
}
float articulo::getCostoMayor(){
    cMayor=c*1.15;
    return cMayor;
}
float articulo::getCostoMenor(){
    cMenor=c*1.30;
    return cMenor;
}