#include <iostream>
using namespace std;

int x, y;

void intercambiar()
{
    int aux, i;
    aux=x;
    x=y;
    y=aux;
    for(i=0; i<100; i++)
    {
        if(i%10==0)
            cout<<"INTERCAMBIANDO"<<endl;
        cout<<"|"<<endl;
        cout<<"/"<<endl;
    }
}

int main()
{
    cout<<"Ingrese un numero --> X=";
    cin>>x;
    cout<<"Ingrese un numero --> Y=";
    cin>>y;
    cout<<"INGRESASTE ("<<x<<","<<y<<")"<<endl;
    intercambiar();
    cout<<"TE QUEDO ("<<x<<","<<y<<")"<<endl;
    return 0;
}
