#include <iostream>
using namespace std;

int main() {
    int A[5], *a, *b, i;
    a=&A[0];
    b=&A[4];
    cout<<"Direccion primer elemento: "<<a<<" ("<<&A[0]<<")"<<endl;
    cout<<"Direccion segundo elemento: "<<b<<" ("<<&A[4]<<")"<<endl;
    cout<<"Diferencia: "<<b-a<<endl;
    return 0;
}
