#include <stdio.h>

int main(){
    int x;

    scanf("%d",&x);

    if(x==0 || x==1){
        x=1;
        printf("%d",x);
    }
    else{
        int res=1;
        int i;
        for(i=2;i<x+1;i++){
            res*=i;
        }
        printf("%d",res);
    }
    return 0;
}
