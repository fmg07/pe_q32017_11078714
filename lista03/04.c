#include <stdio.h>

void Transposta(int m[][3])
{
    int i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }

}


int main()
{
    int m[3][3];
    int i,j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++)
            scanf("%d",&m[i][j]);
    }

    Transposta(m);


    return 0;
}
