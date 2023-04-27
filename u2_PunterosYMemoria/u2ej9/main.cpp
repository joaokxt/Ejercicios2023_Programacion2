#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int i, j=0, n;
    cout<<"Ingrese la cantidad de elementos en su vector --> N=";
    cin>>n;
    int *A = new int[n];
    for(i=0;i<n;i++)
        A[i]=rand()%101;
    for(i=0;i<n;i++)
        cout<<A[i]<<"  "<<*(A+i)<<endl;

    delete[] A;
    return 0;
}
