#include <iostream>
using namespace std;

int main() {
    int A[5], *a, i;
    a=A;
    cout<<"Direcciones contenidos del arreglo: "<<endl;
    for(i=0;i<5;i++)
        cout<<&A[i]<<endl;
    cout<<"Direccion que apunta a y sucesivas: "<<endl;
    for(i=0;i<5;i++)
        cout<<a+i<<endl;
    cout<<"Direccion &a: "<<&a<<endl;

    delete a;
    return 0;
}
