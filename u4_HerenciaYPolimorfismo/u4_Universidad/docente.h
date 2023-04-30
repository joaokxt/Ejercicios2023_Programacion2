//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
#define EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
#include <string>
#include "personal.h"

class Materia;
class Docente:public Personal {
private:
    std::string titulo;
public:
    Docente();
    Docente(int id, std::string names, std::string surnames, std::string mail, std::string degree);
    ~Docente();
    std::string getTitulo();
    void setTitulo(std::string degree);
    void inscripcion(Materia** materias, char* code);
};


#endif //EJERCICIOS2023_PROGRAMACION2_DOCENTE_H
