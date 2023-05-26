#ifndef U3EJ7_CUENTA_H
#define U3EJ7_CUENTA_H

class Cuenta {
private:
    int numero;
    float saldo;
    float interes;
public:
    Cuenta(int number, float interest);
    ~Cuenta();
    void setNumero(int number);
    void setSaldo(int amount);
    void setInteres(int interest);
    int getNumero();
    float getSaldo();
    float getInteres();
    void deposito(float cantidad);
    void extraccion(float cantidad);
    void acreditar(int meses);
};

#endif