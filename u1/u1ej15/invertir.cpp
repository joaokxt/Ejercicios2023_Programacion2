void invertir(int A[], int n)
{
    int i, aux;
    for(i=0;i<n/2;i++)
    {
        aux=A[n-i-1];
        A[n-i-1]=A[i];
        A[i]=aux;
    }
}
