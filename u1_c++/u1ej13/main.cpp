#include <iostream>
#include "buscar.h";
using namespace std;

int main()
{
    int n, i, k, arreglo[100], pos;
    cout<<"Ingrese la cantidad de elementos en el arreglo --> n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento a"<<i<<"=";
        cin>>arreglo[i];
    }
    cout<<"Ingrese el numero que quiere buscar --> k=";
    cin>>k;
    pos=buscar(arreglo, n, k);
    if(pos>=0)
        cout<<"Su numero k esta en el arreglo en la posicion "<<pos<<"."<<endl;
    else
        cout<<"Su numero k no esta en el arreglo."<<endl;
    return 0;
}
