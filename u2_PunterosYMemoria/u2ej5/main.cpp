#include <iostream>
using namespace std;

void mayuscula(char cadena[10])
{
    int i;
    for(i=0;i<10;i++)
        if(cadena[i]>=97)
            cadena[i]-=32;
}

int main() {
    char cadena[10];
    cout<<"Ingrese una cadena: ";
    cin.get(cadena,10);
    cout<<"Texto ingresado: "<<cadena<<endl;
    mayuscula(cadena);
    cout<<"Texto en mayuscula: "<<cadena<<endl;
    return 0;
}
