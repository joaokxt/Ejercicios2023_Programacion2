#include <iostream>
#include <cstring>
using namespace std;

void copia(char* C1, char* C2){
    short i;
    for(i=0;i<strlen(C1);i++)
        C2[i]=C1[i];
}

int main() {
    char cadena[100], cadenaCopia[100], *c1, *c2;
    cout<<"Ingrese una cadena: ";
    cin.get(cadena, 100);
    copia(cadena, cadenaCopia);
    cout<<"Cadena: "<<cadena<<endl;
    cout<<"Copia: "<<cadenaCopia<<endl;
    return 0;
}
