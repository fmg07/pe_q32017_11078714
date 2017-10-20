#include <stdio.h>
#include <math.h>

int bin=0;

int DecimaltoBinario(int x)
{

    int i=0;
    if(x!=0) {
        bin+=pow(10,i)*(x%2);
        i++;
        DecimaltoBinario(x/2);
    }

    return bin;
}

int BinariotoDecimal(int x)
{
    int decimal=0;
    int i=0;
    if(x!=0) {
        decimal+=pow(2,i)*(x%2);
        i++;
        BinariotoDecimal(x/10);
    }

    return decimal;
}

int main()
{
    int op,num;
    scanf("%d",&num);
    scanf("%d",&op);

    if(op==1){
        printf("%d",DecimaltoBinario(num));
    }
    else{
        printf("%d",BinariotoDecimal(num));
    }

    return 0;
}
