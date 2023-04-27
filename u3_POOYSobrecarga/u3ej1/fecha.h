//
// Created by joaok on 30/03/2023.
//

#ifndef U3EJ1_FECHA_H
#define U3EJ1_FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int day, int month, int year);
    int getDia();
    int getMes();
    int getAnio();
    void incrementar(int dias);
    void operator++();
    void operator+(int dias);
};


#endif //U3EJ1_FECHA_H
