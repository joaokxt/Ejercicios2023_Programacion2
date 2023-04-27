#include <iostream>
#include "sumaadyacente.h"
using namespace std;

int main()
{
    int matriz[100][100], m, n, i, j;
    cout<<"Ingrese la cantidad de filas de su matriz: ";
    cin>>m;
    cout<<"Ingrese la cantidad de columnas de la misma: ";
    cin>>n;
    for(i=0;i<m;i++)
        for(j=0; j<n; j++)
        {
            cout<<"Ingrese el elemento a"<<i<<j<<"=";
            cin>>matriz[i][j];
        }
    cout<<"Su matriz es: "<<endl;
    for(i=0;i<m;i++)
    {
        cout<<"| ";
        for(j=0;j<n;j++)
            cout<<matriz[i][j]<<" ";
        cout<<"|"<<endl;
    }
    cout<<"Ingrese la fila del elemento que quiere usar --> i=";
    cin>>i;
    cout<<"Ingrese la columna del mismo --> j=";
    cin>>j;
    cout<<"La suma de los elementos adyacentes al mismo es de: "<<sumaAdyacente(matriz, i, j, m, n)<<endl;
    return 0;
}
