#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int coeficientes[100], n, i, x, resultado=0;
    cout<<"Ingrese el grado de su polinomio --> N=";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<"Ingrese el coeficiente de grado "<<i<<" --> a=";
        cin>>coeficientes[i];
    }
    cout<<"Ingrese el valor de x para reemplazar en el polinomio --> x=";
    cin>>x;
    for(i=0;i<=n;i++)
        resultado+=coeficientes[i]*pow(x,i);
    cout<<"Resultado="<<resultado<<endl;
    return 0;
}
