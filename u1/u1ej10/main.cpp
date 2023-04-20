#include <iostream>
#include "reorganizacion.h"
using namespace std;

int main()
{
    int vector[100], n, i;

    cout<<"Ingrese la cantidad de elementos en su vector --> N=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento a"<<i<<"=";
        cin>>vector[i];
    }
    cout<<"\nVector original:"<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<vector[i]<<"]";
    reorganizar(vector, n);
    cout<<"\nVector reorganizado:"<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<vector[i]<<"]";

    return 0;
}
