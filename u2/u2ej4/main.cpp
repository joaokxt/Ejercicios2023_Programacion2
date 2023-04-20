#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    short A[15], i, j, numRand, *p;
    bool valido;
    for(i=0;i<15;i++){
        do{
            numRand=rand() % 100+1;
            for(j=0;j<i;j++)
                if(A[j]==numRand)
                    valido=false;
            valido=true;
        }while(!valido);
        A[i]=numRand;
        p=&A[i];
        cout<<"A["<<i<<"]="<<*p<<" ("<<p<<")"<<endl;
    }
    return 0;
}
