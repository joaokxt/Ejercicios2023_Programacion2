void ordenar(int A[], int tam)
{
    bool ordenado;
    int i, aux;

    while(!ordenado)
    {
        ordenado=true;
        for(i=0;i<tam-1;i++)
            if(A[i]>A[i+1])
            {
                ordenado=false;
                aux=A[i+1];
                A[i+1]=A[i];
                A[i]=aux;
            }
    }
}
