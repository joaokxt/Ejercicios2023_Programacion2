#ifndef U3PARCIALVIEJO_CONTENEDOR_H
#define U3PARCIALVIEJO_CONTENEDOR_H
#include <string>

class Contenedor {
private:
    int codigo;
    std::string nombre;
    float cantidadActual;
    float cantidadMinima;
    float cantidadMaxima;
public:
    Contenedor();
    Contenedor(int code, std::string name, float maximum, float minimum);
    ~Contenedor();
    int getCodigo();
    std::string getNombre();
    float getCantidadActual();
    float getCantidadMinima();
    float getCantidadMaxima();
    void setCodigo(int code);
    void setNombre(std::string name);
    void setCantidadActual(float amount);
    void setCantidadMaxima(float maximum);
    void setCantidadMinima(float minimum);
    void deposito(float amount);
    void extraccion(float amount);
};


#endif 