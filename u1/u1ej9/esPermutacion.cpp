bool esPermutacion(int A[], int tam)
{
    int i, j, k=1;
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
            if(A[i]==A[j] && i!=j)
                return false;
        if(A[i]==k)
            k++;
    }
    if(k!=tam+1)
        return false;
    return true;
}