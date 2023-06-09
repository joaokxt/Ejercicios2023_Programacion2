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
    int notas[10][4]; /*Tabla de notas, 1 fila x alumno, 1ra celda identifica alumno*/
    Docente* titular;
    int inscriptos;
public:
    Materia();
    Materia(int code, std::string name);
    ~Materia();
    int getCodigo();
    std::string getNombre();
    int* getNotas(int dni);
    Docente* getTitular();
    int getInscriptos();
    void setNuevoDNI(int id, int newId);
    void setNotas(int nota, int dni);
    void setAlumno(int);
    void setTitular(Docente* docente);
    bool hayCupo();
    bool hayTitular();
};


#endif //EJERCICIOS2023_PROGRAMACION2_MATERIA_H
