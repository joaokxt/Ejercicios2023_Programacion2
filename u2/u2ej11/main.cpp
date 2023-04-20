#include <iostream>
using namespace std;

void ordenar(float* array, int max){
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
    int n, i;
    float maximo, minimo, media;
    cout<<"Ingrese la cantidad de elementos en el vector --> N=";
    cin>>n;
    float *A = new float[n];
    for(i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>*(A+i);
    }
    ordenar(A,n);
    maximo=A[n-1];
    minimo=A[0];
    for(i=0;i<n;i++)
        media+=*(A+i);
    media/=n;
    cout<<"-=-=-=|RESULTADOS|=-=-=-\nMedia:"<<media<<"\nMaximo:"<<maximo<<"\nMinimo:"<<minimo<<endl;
    delete[] A;
    return 0;
}
