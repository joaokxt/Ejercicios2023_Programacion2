#ifndef U3EJ6_PASSWORD_H
#define U3EJ6_PASSWORD_H
#include <string>

class Password {
protected:
   char* contrasena;
   int longitud;
public:
    Password();
    Password(int length);
    ~Password();
    void generarContrasena();
    bool esFuerte();
    char* getContrasena();
    int getLongitud();
    void setLongitud(int length);
};

#endif 