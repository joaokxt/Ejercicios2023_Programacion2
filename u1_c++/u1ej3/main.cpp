#include <iostream>
using namespace std;

int mcd(int m, int n)
{
    if(m%n==0)
        return n;
    else
        return mcd(n, m%n);
}
int main()
{
    int m, n, divisor;
    cout<<"Ingrese el valor M=";
    cin>>m;
    cout<<"Ingrese el valor N=";
    cin>>n;
    if(m>n)
        divisor = mcd(m,n);
    else
        divisor = mcd(n,m);
    cout<<"MCD("<<m<<","<<n<<")="<<divisor<<endl;
}
