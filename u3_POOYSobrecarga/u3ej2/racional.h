#ifndef U3EJ2_RACIONAL_H
#define U3EJ2_RACIONAL_H

class Racional{
private:
    float numerador;
    float denominador;
    int MCD(int a, int b);
public:
    Racional();
    Racional(int num, int den);
    ~Racional();
    float getValor();
    int getNumerador();
    int getDenominador();
    void setNumerador(int num);
    void setDenominador(int den);
    void operator++ ();
    void operator-- ();
    Racional* operator+ (Racional *operando);
    Racional* operator- (Racional *operando);
    void operator+= (int operando);
    void operator-= (int operando);
    void simplificar();
};

#endif