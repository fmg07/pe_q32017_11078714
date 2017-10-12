/* Implementacao do algoritmo de Gauss-Legendre
 * para achar o valor de pi apos 10 iteracoes.
 * O resultado achado tem uma precisao ate a
 * 13 casa decimal.
 * A precisao eh interferida pelo hardware e
 * e modo como foi implementada o metodo,
 * pois ha acumulo de erro nas operacoes.
 */

#include <math.h>
#include <stdio.h>

double Gauss_Legendre()
{
    double a=1.0;
    double a1;
    double b=1.0/sqrt(2);
    double t=1.0/4.0;
    double p=1.0;

    int i;
    for(i=0;i<10;i++) {
        a1=(a+b)/2.0;
        b=sqrt(a*b);
        t-=p*pow((a-a1),2);
        p=2*p;
        a=a1;
    }

    return pow((a+b),2)/(4*t);
}

int main() {

    printf("%.18f\n",Gauss_Legendre());

    return 0;
}
