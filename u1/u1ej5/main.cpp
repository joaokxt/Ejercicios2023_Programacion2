#include <iostream>
using namespace std;

int divisoresPrimos(int num1, int num2)
{
    int i, j, k=0, cant, primos[100], divisores1[100], divisores2[100], a=0, b=0;
    bool comparten;
    //Filtrar primos hasta el menor numero ingresado
    for(i=0;i<=num2;i++)
    {
        cant=0;
        for(j=1;j<=i;j++)
            if(i%j==0)
                cant++;
        if(cant==2)
        {
            primos[k]=i;
            k++;
        }
    }
    //Selecciono cuales son divisores de cada numero
    for(i=0;i<k;i++)
    {
        if(num1%primos[i]==0)
        {
            divisores1[a]=primos[i];
            a++;
        }
        if(num2%primos[i]==0)
        {
            divisores2[b]=primos[i];
            b++;
        }
    }
    //Comparo los divisores
    if(a!=b)
        cout<<"\nNo tienen los mismos divisores primos"<<endl;
    else
    {
        for(i=0;i<a;i++)
            if(divisores1[i]!=divisores2[i])
            {
                cout<<"\nNo tienen los mismos divisores primos"<<endl;
                comparten = false;
            }
        if(comparten==true)
            cout<<"Tienen los mismos divisores primos"<<endl;
    }
    //Muestro los arrays
    cout<<"Divisores primos de "<<num1<<endl;
    for(i=0;i<a;i++)
        cout<<"{"<<divisores1[i]<<"} ";
    cout<<"\nDivisores primos de "<<num1<<endl;
    for(i=0;i<b;i++)
        cout<<"{"<<divisores2[i]<<"} ";
}

int main() {
    int n,  m;
    cout<<"Ingrese un numero N=";
    cin>>n;
    cout<<"Ingrese un numero M=";
    cin>>m;
    if(n>m)
        divisoresPrimos(n,m);
    else
        divisoresPrimos(m,n);
}
