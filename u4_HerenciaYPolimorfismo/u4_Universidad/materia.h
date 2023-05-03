//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_MATERIA_H
#define EJERCICIOS2023_PROGRAMACION2_MATERIA_H
#include <string>

/*Declaraciones previas a fin de evitar dependencias ciclicas*/
class Personal;
class Alumno;
class Docente;
class Materia {
private:
    int codigo;
    std::string nombre;
    int** notas;
    Alumno** alumnos; /*Arreglo de apuntadores a Alumnos*/
    Docente* titular;
    int inscriptos;
public:
    Materia();
    Materia(int code, std::string name);
    ~Materia();
    int getCodigo();
    std::string getNombre();
    int* getNotas(int dni);
    Alumno** getAlumnos();
    Docente* getTitular();
    void setNotas(int nota, int dni);
    void setAlumno(Alumno* alumno);
    void setTitular(Docente* docente);
    bool hayCupo();
    bool hayTitular();
};


#endif //EJERCICIOS2023_PROGRAMACION2_MATERIA_H
