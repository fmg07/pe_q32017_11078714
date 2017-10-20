#include <stdio.h>
#include <string.h>

int Palindromo(char *s)
{
    int i,k=strlen(s)-1;
    for(i=0;i<strlen(s);i++){
        if(s[i]!=s[k]) return 0;
        k--;
    }
    return 1;

}

int main()
{
    char s[20];

    scanf("%s",s);

    int resultado=Palindromo(s);
    if(resultado) printf("sim\n");
    else printf("nao\n");

    return 0;
}
