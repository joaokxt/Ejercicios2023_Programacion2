#ifndef EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#define EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#include <string>
#include "personal.h"
#include "materia.h"

class Alumno:private Personal{
private:
    std::string carrera;
    int edad;
    int inscripto;
    Materia** materias = new Materia*[100];
public:
    Alumno():Personal(){};
    Alumno(int *id, std::string names, std::string surnames, std::string mail, std::string career, int age):Personal(id, names ,surnames, mail){};
    std::string getCarrera();
    int getEdad();
    Materia** getMateria();
    void setCarrera(std::string career);
    void setEdad(int age);
    void inscripcion(int *code, std::string name);
    void cargarNota(int indice, int nota);
};


#endif //EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
