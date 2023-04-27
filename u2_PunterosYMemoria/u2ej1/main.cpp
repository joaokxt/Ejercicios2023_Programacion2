#include <iostream>
using namespace std;

int main() {
    int n1, n2, *a;
    cout<<"Ingrese el primer entero --> N1=";
    cin>>n1;
    cout<<"Ingrese el segundo entero --> N2=";
    cin>>n2;
    a=&n1;
    cout<<"El valor de n1 es "<<*a<<endl;
    a=&n2;
    cout<<"El valor de n2 es "<<*a<<endl;
}
