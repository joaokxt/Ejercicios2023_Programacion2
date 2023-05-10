#ifndef U4EJ2_EMPLEADO_H
#define U4EJ2_EMPLEADO_H
#include <string>

class Empleado {
protected:
    std::string nombre;
    short edad;
    float salario;
public:
    Empleado();
    Empleado(std::string name, short age, float salary);
    ~Empleado();
    std::string getNombre();
    short getEdad();
    float getSalario();
    void setNombre(std::string name);
    void setEdad(short age);
    void setSalario(float salary);
};


#endif 