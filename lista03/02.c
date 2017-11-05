#include <stdio.h>

int length(char s[])
{
    int i=0;

    while(s[i++]);

    return i;
}

void Inverte(char s[])
{
    int i,j,l;
    l=length(s);
    j=l-1;

    int temp;

    for(i=0;i<l/2;i++,j--) {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }

}

int main()
{
    char entrada[255];
    fgets(entrada , 255 , stdin );

    Inverte(entrada);

    printf("%s\n",entrada);

    return 0;
}
