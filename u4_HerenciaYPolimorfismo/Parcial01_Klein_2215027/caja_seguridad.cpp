//
// Created by joaok on 11/05/2023.
//

#include "caja_seguridad.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

CajaSeguridad::CajaSeguridad() {
    generarCodigo();
}
CajaSeguridad::~CajaSeguridad() {

}
void CajaSeguridad::generarCodigo() {
    srand(time(NULL));
    codigo=rand()%1000+100;
}
int CajaSeguridad::getCodigo() {
    return codigo;
}
