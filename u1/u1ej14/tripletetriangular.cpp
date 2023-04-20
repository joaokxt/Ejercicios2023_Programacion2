void ordenar(int A[], int n)
{
    int i, aux;
    bool ordenado;
    while(!ordenado)
    {
        ordenado= true;
        for(i=0;i<n;i++)
            if(A[i]>A[i+1])
            {
                ordenado=false;
                aux=A[i+1];
                A[i+1]=A[i];
                A[i]=aux;
            }
    }
}

bool esTriplete(int A[], int n)
{
    int i, j, k, l;
    ordenar(A,n);
    for(i=0;i<n-2;i++)
       for(j=i+1;j<n-1;j++)
           for(k=j+1;k<n;k++)
               if(0<=A[i]<A[j]<A[k])
                   if(A[i]+A[j]>A[k])
                       if(A[j]+A[k]>A[i])
                           if(A[k]+A[i]>A[j])
                               return true;
    return false;
}
