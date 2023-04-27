#include <iostream>
using namespace std;

int calcular(int limInf, int limSup, int K)
{
    int cant=0, i;
    for(i=limInf; i<=limSup; i++)
        if(i%K==0)
            cant++;
    return cant;
}

int main()
{
    int a, b, k;

    cout<<"Ingrese el limite inferior de su entorno: ";
    cin>>a;
    do
    {
        cout<<"Ingrese el limite superior de su entorno: ";
        cin>>b;
        if(b<=a)
            cout<<"El limite superior no puede ser menor o igual al inferior!"<<endl;
    }while(b<=a);
    do
    {
        cout<<"Ingrese el valor de K: ";
        cin>>k;
        if(k==0)
            cout<<"K no puede ser igual a 0!";
    }while(k==0);
    cout<<"Existen "<<calcular(a,b,k)<<" numeros divisibles por "<<k<<" en el entorno ("<<a<<","<<b<<")."<<endl;
}
