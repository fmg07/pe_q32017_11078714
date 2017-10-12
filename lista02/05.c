#include <stdio.h>


int Fatorial(int a)
{
    int i,fat=1;

    for(i=1;i<=a;i++) {
        fat*=i;
    }

    return fat;
}

int Binomial(int n,int k)
{
    return Fatorial(n)/(Fatorial(k)*Fatorial(n-k));
}

int main() {
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("%d\n",Binomial(a,b));

    return 0;
}
