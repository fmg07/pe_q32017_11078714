#include <stdio.h>


/*conta numero de letras na string*/
int length(char s[])
{
    int i=0;

    while(s[i++]);

    return i;
}

/*Conta vogais de uma string usando ASCII como base
 * A=65, E=69, I=73, O=79, U=85,
 * a=97, e=101, e=105, i=111, u=117
 */
int Conta_Vogal(char s[])
{
    int i,l,vog=0;

    l=length(s);

    for(i=0;i<l;i++) {
        if(s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117) vog++;

    }

    return vog;
}


int main()
{
    char entrada [255];
    fgets(entrada , 255 , stdin );

    printf("%d\n",Conta_Vogal(entrada));


    return 0;
}
