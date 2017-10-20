#include <stdio.h>

int fatorial(int n)
{
    if(n>=1) return n*fatorial(n-1);

    return 1;
}

int Binomial(int n, int k)
{
    return fatorial(n)/(k*(fatorial(n-k)));
}

int main()
{
    int n,k;

    scanf("%d",&n);
    scanf("%d",&k);

    printf("%d\n",Binomial(n,k));

    return 0;
}
