#include <stdio.h>

int ParImpar(int a)
{
    if (a%2==0) return 0;
    else return 1;
}

int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n", ParImpar(x));
    return 0;
}
