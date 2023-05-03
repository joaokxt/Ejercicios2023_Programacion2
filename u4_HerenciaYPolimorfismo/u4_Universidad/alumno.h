#ifndef EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#define EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
#include <string>
#include "personal.h"

class Materia;
class Personal;
class Alumno:public Personal{
private:
    std::string carrera;
    int edad;
public:
    Alumno();
    Alumno(int id, std::string names, std::string surnames, std::string mail, std::string career, int age);
    ~Alumno();
    std::string getCarrera();
    int getEdad();
    void setCarrera(std::string career);
    void setEdad(int age);
    void inscripcion(Materia** materias, int code);
    void cargarNota(Materia** materias, int code, int nota);
};


#endif //EJERCICIOS2023_PROGRAMACION2_ALUMNO_H
