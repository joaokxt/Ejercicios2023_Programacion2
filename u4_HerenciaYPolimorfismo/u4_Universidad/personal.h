//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
#define EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
#include <string>

class Personal {
private:
    int *dni[];
    std::string nombres;
    std::string apellidos;
public:
    Personal();
    Personal(int *id, std::string names, std::string surnames);
    int* getDNI();
    std::string getNombres();
    std::string getApellidos();
    void setDNI(int *id);
    void setNombres(std::string names);
    void setApellidos(std::string surnames);
};


#endif //EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
