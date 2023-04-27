int sumaAdyacente(int M[][100], int a, int b, int m, int n)
{
    int suma=0;
    if(a!=m)
        suma+=M[a+1][b];
    if(a!=0)
        suma+=M[a-1][b];
    if(b!=n)
        suma+=M[a][b+1];
    if(b!=0)
        suma+=M[a][b-1]+;
    return suma;
}
