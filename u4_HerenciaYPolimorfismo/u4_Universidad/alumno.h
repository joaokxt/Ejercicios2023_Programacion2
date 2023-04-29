#ifndef EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#define EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#include <string>
#include "personal.h"
#include "materia.h"

class Alumno:private Personal{
private:
    std::string carrera;
    int edad;
public:
    Alumno():Personal(){};
    Alumno(int id, std::string names, std::string surnames, std::string mail, std::string career, int age):Personal(id, names ,surnames, mail){};
    ~Alumno();
    std::string getCarrera();
    int getEdad();
    void setCarrera(std::string career);
    void setEdad(int age);
    void inscripcion(Materia** materias, char *code, std::string name);
    void cargarNota(Materia** materias, char* code, int nota);
};


#endif //EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
