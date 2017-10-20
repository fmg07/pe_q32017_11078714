#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;

    return (fibMem[n]==fib(n-1)+fib(n-2))?:(fibMem[n]=fib(n-1)+fib(n-2));
}

int main()
{
    int n;

    fibMem[1] = 1;
    fibMem[2] = 2;

    scanf("&d",&n);
    printf("%d\n", fib(n));
    printf("%d\n", fibMem[n]);

    return 0;
}
