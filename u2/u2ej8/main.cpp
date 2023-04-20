#include <iostream>
#include <cstring>
using namespace std;

int vocalesMinusculas(char* C){
    short i, cant=0;
    for(i=0;i<strlen(C);i++)
        if(C[i]==97 || C[i]==101 || C[i]==105 || C[i]==111 || C[i]==117)
            cant++;
    return cant;
}

int main() {
    char cadena[50];
    cout<<"Ingrese una cadena de (maximo) 50 caracteres: ";
    cin.get(cadena, 50);
    cout<<"Su cadena tiene "<<vocalesMinusculas(cadena)<<" vocales minusculas"<<endl;
    return 0;
}
