#ifndef U4EJ2_COMERCIAL_H
#define U4EJ2_COMERCIAL_H
#include <string>
#include "empleado.h"

class Empleado;
class Comercial:private Empleado {
private:
    short comision;
public:
    Comercial();
    Comercial(std::string name, short age, float salary, short comission);
    ~Comercial();
    short getComision();
    void setComision(short comission);
    void plus();
    std::string toString();
};

#endif 