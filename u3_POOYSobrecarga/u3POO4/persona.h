//
// Created by joaok on 14/04/2023.
//

#ifndef U3POO4_PERSONA_H
#define U3POO4_PERSONA_H
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    char dni[8];
    char sexo;
    double peso;
    double altura;
    void generaDNI();
public:
    Persona();
    Persona(std::string name, int age, char sex);
    Persona(std::string name, int age, char id[8], char sex, double weight, double height);
    int calcularIMC();
    bool esMayorDeEdad();
    void setNombre(string name);
    void setEdad(int age);
    void setSexo(char sex);
    void setPeso(double weight);
    void setAltura(double height);
    string getNombre();
    int getEdad();
    char* getDNI();
    char getSexo();
    double getPeso();
    double getAltura();
};


#endif //U3POO4_PERSONA_H
