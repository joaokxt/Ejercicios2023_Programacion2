int buscar(int A[], int n, int k)
{
    int i;
    for(i=0;i<n;i++)
        if(A[i]==k)
            return i;
    return -1;
}

