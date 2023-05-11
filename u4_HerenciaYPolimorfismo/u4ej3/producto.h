#ifndef U4EJ3_PRODUCTO_H
#define U4EJ3_PRODUCTO_H
#include <string>

class Producto {
protected:
   char* nombre;
   float precio;
   static int cantProductos;
public:
    Producto();
    Producto(char* name, float price);
    ~Producto();
    char* getNombre();
    float getPrecio();
    void setNombre(char* name);
    void setPrecio(float price);
    
};

#endif 