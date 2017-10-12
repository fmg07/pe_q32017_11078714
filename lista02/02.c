#include <stdio.h>

float Volume(float l,float c,float a)
{
    return l*c*a;
}

int main() {
    float l,c,a;

    scanf("%f",&l);
    scanf("%f",&c);
    scanf("%f",&a);

    printf("%.2f\n",Volume(l,c,a));

    return 0;
}
