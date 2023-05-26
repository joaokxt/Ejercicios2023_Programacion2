#ifndef U3EJ8_PERSONA_H
#define U3EJ8_PERSONA_H
#include <string>

class Persona {
private:
    std::string nombre;
    int fechaNacimiento[3];
    int edad;
    int dni;
    char sexo;
    float peso;
    float altura;
public:
    Persona();
    Persona(std::string name, int* birth, char sex);
    Persona(std::string name, int* birth, int id, char sex, float weight, float height);
    void setNombre(std::string name);
    void setNacimiento(int* birth);
    void setDni(int id);
    void setSexo(char sex);
    void setPeso(float weight);
    void setAltura(float height);
    std::string getNombre();
    int* getNacimiento();
    int getDni();
    char getSexo();
    float getPeso();
    float getAltura();
    float calcularIMC();
    int calcularEdad();
    bool esMayorDeEdad();
}

#endif