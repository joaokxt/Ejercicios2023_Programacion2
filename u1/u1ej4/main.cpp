#include <iostream>
using namespace std;

int factorial(int n, int p)
{
    if(n==1)
        return p;
    else
    {
        p *= n;
        factorial(n - 1, p);
    }
}

int main()
{
    int num;
    cout<<"Ingrese un numero para calcular su factorial N=";
    cin>>num;
    cout<<num<<"!="<<factorial(num, 1);
}
