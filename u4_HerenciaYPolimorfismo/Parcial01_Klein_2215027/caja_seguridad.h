//
// Created by joaok on 11/05/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_CAJA_SEGURIDAD_H
#define EJERCICIOS2023_PROGRAMACION2_CAJA_SEGURIDAD_H

class CajaSeguridad {
private:
    int codigo;
    void generarCodigo();
public:
    CajaSeguridad(); 
    ~CajaSeguridad();
    int getCodigo();
};


#endif //EJERCICIOS2023_PROGRAMACION2_CAJA_SEGURIDAD_H
