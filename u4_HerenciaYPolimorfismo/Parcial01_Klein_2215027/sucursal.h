//
// Created by joaok on 11/05/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_SUCURSAL_H
#define EJERCICIOS2023_PROGRAMACION2_SUCURSAL_H
#include "banco.h"
#include "caja_seguridad.h"
#include <string>

class Banco;
class Sucursal:public Banco {
private:
    int numero;
    std::string responsable;
    CajaSeguridad* caja;
public:
    Sucursal();
    Sucursal(std::string name, int num, std::string resp);
    ~Sucursal();
    int getNumero();
    std::string getResponsable();
    CajaSeguridad* getCaja();
};


#endif //EJERCICIOS2023_PROGRAMACION2_SUCURSAL_H
