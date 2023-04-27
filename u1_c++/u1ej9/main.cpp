#include <iostream>
#include "permutacionlib.h"
using namespace std;

int main()
{
    int arreglo[100], n, i;
    bool permutacion;

    cout<<"Ingrese la cantidad de elementos en su secuencia --> N=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento a"<<i<<"= ";
        cin>>arreglo[i];
    }

    permutacion=esPermutacion(arreglo, n);
    cout<<"El arreglo: \n"<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<arreglo[i]<<"] ";
    if(permutacion)
        cout<<"\n Si es una permutacion"<<endl;
    else
        cout<<"\n No es una permutacion"<<endl;

    return 0;
}
