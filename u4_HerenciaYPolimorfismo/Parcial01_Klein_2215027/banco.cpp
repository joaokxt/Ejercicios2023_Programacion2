//
// Created by joaok on 11/05/2023.
//

#include "banco.h"
using namespace std;

Banco::Banco(){
    nombre="Indefinido";
}
Banco::Banco(string name){
    nombre = name;
}
Banco::~Banco(){

}
string Banco::getNombre(){
    return nombre;
}