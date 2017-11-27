#include <stdio.h>
#include <math.h>

typedef struct tempo{
    int m;
    int s;
    int d;
}tempo;

float Converter_min(tempo x)
{
    return 60*x.m+x.s+(x.d/100);
}

void Print_tempo(float x)
{
    int m,s,temp;
    float d;

    m=x/60;
    s=(int)x%60;
    temp=(int)x;
    d=x-temp;
    d*=100;

    printf("%f\n",d);
    printf("%dm %ds %.0f",m,s,d);
}

void Diferenca(tempo a, tempo b)
{
    float t1,t2,res;
    t1=Converter_min(a);
    t2=Converter_min(b);

    res=t2-t1;

    Print_tempo(res);
}



int main()
{
    tempo a,b;

    scanf("%dm %ds %d",&(a.m),&(a.s),&(a.d));

    scanf("%dm %ds %d",&(b.m),&(b.s),&(b.d));

    Diferenca(a,b);


    return 0;
}

