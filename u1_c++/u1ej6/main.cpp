#include <iostream>
#include <cmath>
using namespace std;

bool semiPrimo(int num)
{
    int i,j,k=0,cant,primos[100];
    for(i=0;i<=num/2;i++)
    {
        cant=0;
        for(j=1;j<=sqrt(i);j++)
            if(i%j==0)
                cant++;
        if(cant==2)
        {
            primos[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++)
        for(j=0;j<k;j++)
            if(primos[i]*primos[j]==num)
                return true;
    return false;
}
int main()
{
    int x;
    cout<<"Ingrese un numero para saber si es semiprimo --> X=";
    cin>>x;
    if(semiPrimo(x)==true)
        cout<<x<<" es semiprimo"<<endl;
    else
        cout<<x<<" no es semprimo"<<endl;
    return 0;
}
