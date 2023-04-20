#include <iostream>
#include "tripletetriangular.h"
using namespace std;

int main() {
    int n, i, arreglo[100];
    cout<<"Ingrese la cantidad de elementos en el arreglo --> n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento a"<<i<<"=";
        cin>>arreglo[i];
    }
    if(esTriplete(arreglo, n))
        cout<<"Hay un triplete triangular en este arreglo"<<endl;
    else
        cout<<"No hay un triplete triangular en este arreglo"<<endl;
    return 0;
}
