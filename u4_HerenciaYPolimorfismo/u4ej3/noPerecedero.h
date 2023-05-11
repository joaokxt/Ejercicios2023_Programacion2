#ifndef U4EJ3_NOPERECEDERO_H
#define U4EJ3_NOPERECEDERO_H
#include <string>
#include "producto.h"

class Producto;
class NoPerecedero: public Producto {
private:
    char* tipo;
public:
    NoPerecedero();
    NoPerecedero(char* name, float price, char* type);
    ~NoPerecedero();
    char* getTipo();
    void setTipo(char* type);
    float calcularMonto(int amount);
};

#endif 