void reorganizar(int A[], int tam)
{
    int i, aux;
    bool ordenado;

    while(!ordenado)
    {
        ordenado=true;
        for(i=0;i<tam-1;i++)
            if(A[i]%2==0 && A[i+1]%2==1)
            {
                ordenado=false;
                aux=A[i+1];
                A[i+1]=A[i];
                A[i]=aux;
            }
    }
}
