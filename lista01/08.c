#include <stdio.h>

int main(){
    int i;
    scanf("%d",&i);

    int j,r=0,k=1;
    for(j=0;j<i;j++){
        int t;
        t = r + k;
        r = k;
        k = t;
        printf(" %d,",k);
    }

}
