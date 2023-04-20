#include <iostream>
#include "ordenar.h"
using namespace std;

int main()
{
    int n, i, arreglo[100];
    cout<<"Ingrese la cantidad de elementos en el arreglo --> n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento a"<<i<<"=";
        cin>>arreglo[i];
    }
    ordenar(arreglo, n);
    cout<<"Arreglo ordenado: "<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<arreglo[i]<<"]";

    return 0;
}
