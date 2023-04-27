//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_MATERIA_H
#define EJERCICIOS2023_PROGRAMACION2_MATERIA_H
#include <string>

class Materia {
private:
    int codigo[8];
    std::string nombre;
    int cargadas;
    int *notas;
public:
    Materia(int *code, std::string name);
    int* getNotas();
    void setNotas(int nota);
};


#endif //EJERCICIOS2023_PROGRAMACION2_MATERIA_H
