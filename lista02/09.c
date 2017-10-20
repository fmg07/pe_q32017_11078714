#include <stdio.h>


int Exponencial(int x, int y)
{

    if(y==0){
        return 1;
    }

    return x*Exponencial(x,y-1);
}

int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d\n",Exponencial(x,y));

    return 0;
}
