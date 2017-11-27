#include <stdio.h>
#include <math.h>

typedef struct pontos3D{
    float x;
    float y;
    float z;
}ponto3D;

float Distancia(ponto3D a,ponto3D b)
{
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2)+pow((b.z-a.z),2));
}


int main()
{
    ponto3D a,b;

    scanf("%f, %f, %f",&(a.x),&(a.y),&(a.z));

    scanf("%f, %f, %f",&(b.x),&(b.y),&(b.z));


    printf("%.2f",Distancia(a,b));


    return 0;
}
