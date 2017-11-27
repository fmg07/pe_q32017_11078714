#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

int f1(ulint x)
{
    float a,temp;
    a=log(x)/log(2.0);
    temp=(int)a;

    if((a-temp)==0) return 1;

    return 0;
}

int f2(ulint x)
{
    return (x!=0)&&((x&(x-1))==0);
}

int main(void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma=0;

    tempo_init =clock();

    for(int i=0;i<BIGNUM;i++) {
        soma+=f1(i);
    }

    tempo_fim=clock();
    tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;

    printf("Tempo gasto na versao normal : %lf\n",tempo_gasto);
    tempo_init=clock();

    for(int i=0;i<BIGNUM;i++) {
        soma+=f2(i);
    }

    tempo_fim=clock();
    tempo_gasto=(double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;

    printf("Tempo gasto na versao bitwise : %lf\n",tempo_gasto);

    return 0;
}
