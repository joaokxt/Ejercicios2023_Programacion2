#include <iostream>
#include <cmath>
using namespace std;

float calcular(float X, float Y, float D)
{
    float saltosGrillo;
    saltosGrillo = (Y-X)/D;
    if(saltosGrillo-trunc(saltosGrillo)>0)
        saltosGrillo=trunc(saltosGrillo+1);
    return saltosGrillo;
}

int main()
{
    float x,y,d;

    cout<<"Ingrese la posicion del grillo --> X=";
    cin>>x;
    do
    {
        cout<<"Ingrese la posicion a la que quiere que vaya --> Y=";
        cin>>y;
        if(y<x)
            cout<<"Destino invalido!"<<endl;
    }while(y<x);
    do
    {
        cout<<"Ingrese la distancia que salta --> D=";
        cin>>d;
        if(d<=0)
            cout<<"No puede saltar 0 o para atras!"<<endl;
    }while(d<=0);
    cout<<"\nEl grillo tiene que dar por lo menos "<<calcular(x,y,d)<<" saltos."<<endl;
    return 0;
}
