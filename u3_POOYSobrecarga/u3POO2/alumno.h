//
// Created by joaok on 30/03/2023.
//

#ifndef U3POO2_ALUMNO_H
#define U3POO2_ALUMNO_H
using namespace std;

class alumno {
private:
    char nombre[100];
    int clave;
    float notas[3];
    float notaFinal=0;
    bool aprobado=false;
public:
    alumno(char* name, int key, float* marks);
    char* getNombre();
    int getClave();
    float* getNotas();
    float getNotaFinal();
    bool getAprobado();
};


#endif //U3POO2_ALUMNO_H
