//
// Created by joaok on 13/04/2023.
//

#ifndef U3POO3_CUENTA_H
#define U3POO3_CUENTA_H
#include <string>

class Cuenta {
private:
    std::string titular;
    double cantidad=0;
public:
    Cuenta(std::string nombre);
    Cuenta(std::string nombre, double monto);
    void setTitular(std::string nuevoTitular);
    void setCantidad(double nuevaCantidad);
    std::string getTitular();
    double getCantidad();
    void ingresar(double ingreso);
    void retirar(double egreso);
};


#endif //U3POO3_CUENTA_H
