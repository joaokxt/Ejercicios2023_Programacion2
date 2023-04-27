#include <iostream>
#include <cstring>
using namespace std;

void invertir(char* C)
{
    short i;
    int aux, max;
    max=strlen(C)/2;
    for(i=0;i<max;i++)
    {
        aux=C[i];
        C[i]=C[strlen(C)-i-1];
        C[strlen(C)-i-1]=aux;
    }
}

int main() {
    char cadena[50], *c;
    cout<<"Ingrese una cadena de (maximo) 50 caracteres: ";
    cin.get(cadena,50);
    cout<<"Cadena ingresada: "<<cadena<<endl;
    invertir(cadena);
    cout<<"Cadena invertida: "<<cadena<<endl;
    return 0;
}
