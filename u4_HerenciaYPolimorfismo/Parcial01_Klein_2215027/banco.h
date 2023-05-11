//
// Created by joaok on 11/05/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_BANCO_H
#define EJERCICIOS2023_PROGRAMACION2_BANCO_H
#include <string>

class Banco {
protected:
    std::string nombre;
public:
    Banco();
    Banco(std::string name);
    ~Banco();
    std::string getNombre();
};


#endif //EJERCICIOS2023_PROGRAMACION2_BANCO_H
