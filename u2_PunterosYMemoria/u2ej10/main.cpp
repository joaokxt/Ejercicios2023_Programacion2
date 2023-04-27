#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ordenar(int* array, int max){
    int i, aux;
    bool ordenado;

    while(!ordenado)
    {
        ordenado=true;
        for(i=0;i<max-1;i++)
            if(array[i]>array[i+1])
            {
                ordenado=false;
                aux=array[i];
                array[i]=array[i+1];
                array[i+1]=aux;
            }
    }
}

int main() {

    srand(time(NULL));

    int n, i;
    cout<<"Ingrese la cantidad de elementos en el arreglo --> N=";
    cin>>n;

    int *A = new int[n];
    for(i=0;i<n;i++)
        *(A+i)=rand()%101;

    cout<<"Array desordenado: "<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<*(A+i)<<"] "<<endl;
    cout<<endl;

    ordenar(A, n);
    cout<<"Array ordenado: "<<endl;
    for(i=0;i<n;i++)
        cout<<"["<<*(A+i)<<"] "<<endl;

    delete[] A;
    return 0;
}
