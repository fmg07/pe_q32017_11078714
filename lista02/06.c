#include <stdio.h>
#include <math.h>


double raizDelta(double a, double b, double c)
{
    return sqrt(pow(b,2)-(4.0*a*c));
}


void Bhaskara(double a, double b, double c)
{
    printf("%.2f ",((-b)+raizDelta(a,b,c)/(2.0*a)));

    printf("%.2f\n",((-b)-raizDelta(a,b,c)/(2.0*a)));
}


int main() {
    double a,b,c;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    Bhaskara(a,b,c);

    return 0;
}
