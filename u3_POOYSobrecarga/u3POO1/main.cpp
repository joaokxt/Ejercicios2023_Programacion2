#include <iostream>
#include "articulo.h"
using namespace std;

int main() {
    articulo botella(200);
    char ing;
    float incremento;

    cout<<"Su articulo es: BOTELLA";
    cout<<"\n-Costo: $"<<botella.getCosto();
    cout<<"\n-Costo por menor: $"<<botella.getCostoMenor();
    cout<<"\n-Costo por mayor: $"<<botella.getCostoMayor()<<endl;
    cout<<"Desea incrementear el precio? [Y/N] -->";
    cin>>ing;
    if(ing=='y'||ing=='Y')
    {
        cout<<"Cuanto? -->";
        cin>>incremento;
        botella.incremento(incremento);
        cout<<"NUEVOS COSTOS: ";
        cout<<"\n-Costo: $"<<botella.getCosto();
        cout<<"\n-Costo por menor: $"<<botella.getCostoMenor();
        cout<<"\n-Costo por mayor: $"<<botella.getCostoMayor()<<endl;
    }
    cout<<"ADIOS"<<endl;
    return 0;
}
