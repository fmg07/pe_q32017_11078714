#include <stdio.h>
#include <stdlib.h>


int *soma_vetor(int v1[],int v2[])
{
    int i=0;
    int* v3=malloc(sizeof(int)*5);
    if(v3==NULL) return NULL;

    for(i=0;i<5;i++){
        v3[i]=v1[i]+v2[i];
    }
    return v3;
}


int main()
{
    int v1[5];
    int v2[5];
    int i;

    int* v3;

    for(i=0;i<5;i++){
            scanf("%d",&v1[i]);
    }

    for(i=0;i<5;i++){
            scanf("%d",&v2[i]);
    }

    v3=soma_vetor(v1,v2);

    for(i=0;i<5;i++) printf("%d ",v3[i]);

    printf("\n");

    free(v3);

    return 0;
}
