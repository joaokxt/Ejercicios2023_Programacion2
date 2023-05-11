#include <iostream>
#include "producto.h"
#include "perecedero.h"
using namespace std;

Perecedero::Perecedero():Producto(){
    diasACaducar=0;
}
Perecedero::Perecedero(char* name, float price, int days):Producto(name,price){
    diasACaducar=days;
}
Perecedero::~Perecedero(){

}
int Perecedero::getDias(){
    return diasACaducar;
}
void Perecedero::setDias(int days){
    diasACaducar=days;
}
float Perecedero::calcularMonto(int amount){ 
    if(diasACaducar==1){
        return (precio/4)*amount;
    } else if(diasACaducar==2){
        return (precio/3)*amount;
    } else if(diasACaducar==3){
        return (precio/2)*amount;
    } else{
        return precio*amount;
    }
}