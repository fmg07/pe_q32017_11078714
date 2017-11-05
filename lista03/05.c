#include <stdio.h>
#include <stdlib.h>

void Repeticoes(int v[])
{

}


int main()
{
    int n,i;

    scanf("%d",&n);

    int* v=malloc(sizeof(int)*n);

    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    Repeticoes(v);

    return 0;
}
