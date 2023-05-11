#ifndef U4EJ3_PERECEDERO_H
#define U4EJ3_PERECEDERO_H
#include <string>
#include "producto.h"

class Producto;
class Perecedero: public Producto {
private:
    int diasACaducar;
public:
    Perecedero();
    Perecedero(char* name, float price, int days);
    ~Perecedero();
    int getDias();
    void setDias(int days);
    float calcularMonto(int amount);
};

#endif 