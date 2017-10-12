#include <stdio.h>
#include <math.h>

/*Opcao 01*/
float Soma(float a, float b)
{
    return a+b;
}

/*Opcao 02*/
float Subtracao(float a, float b)
{
    return a-b;
}

/*Opcao 03*/
float Multiplicacao(float a, float b)
{
    return a*b;
}

/*Opcao 04*/
float Divisao(float a, float b)
{
    return a/b;
}

/*Opcao 05*/
float Potenciacao(float a, float b)
{
    return pow(a,b);
}

int main() {
    int x;
    scanf("%d",&x);

    if(x>5){
        printf("Erro: Numero inserido nao eh uma operacao valida.");
        goto l1;
    }

    float a,b;

    scanf("%f",&a);
    scanf("%f",&b);

    switch(x) {
        case 1:
            printf("%.2f\n",Soma(a,b));
            break;
        case 2:
            printf("%.2f\n",Subtracao(a,b));
            break;
        case 3:
            printf("%.2f\n",Multiplicacao(a,b));
            break;
        case 4:
            printf("%.2f\n",Divisao(a,b));
            break;
        default:
            printf("%.2f\n",Potenciacao(a,b));
            break;
    }

    l1:
    return 0;
}
