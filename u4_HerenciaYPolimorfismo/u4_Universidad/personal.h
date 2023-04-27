//
// Created by joaok on 27/04/2023.
//

#ifndef EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
#define EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
#include <string>

class Personal {
private:
    int dni[8];
    std::string nombres;
    std::string apellidos;
    std::string mail;
public:
    Personal();
    Personal(int *id, std::string names, std::string surnames, std::string mail);
    int* getDNI();
    std::string getNombres();
    std::string getApellidos();
    std::string getMail();
    void setDNI(int *id);
    void setNombres(std::string names);
    void setApellidos(std::string surnames);
    void setMail(std::string mail);
};


#endif //EJERCICIOS2023_PROGRAMACION2_PERSONAL_H
