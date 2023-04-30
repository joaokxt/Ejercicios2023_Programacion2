//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
#define EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
#include "personal.h"
#include "materia.h"
#include <string>

class Docente:private Personal {
private:
    std::string titulo;
public:
    Docente():Personal(){};
    Docente(int id, std::string names, std::string surnames, std::string mail, std::string degree):Personal(id, names ,surnames, mail){};
    ~Docente();
    std::string getTitulo();
    void setTitulo(std::string degree);
    void inscripcion(Materia** materias, int* code);
};


#endif //EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
