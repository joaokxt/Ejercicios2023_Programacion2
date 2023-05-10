#ifndef U4EJ2_REPARTIDOR_H
#define U4EJ2_REPARTIDOR_H
#include <string>
#include "empleado.h"

class Empleado;
class Repartidor:private Empleado {
private:
    short zona;
public:
    Repartidor();
    Repartidor(std::string name, short age, float salary, short zone);
    ~Repartidor();
    short getZona();
    void setZona(short zone);
    void plus();
    std::string toString();
};

#endif 