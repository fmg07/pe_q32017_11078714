#include <stdio.h>

int main(){
    int x,y;

    scanf("%d %d",&x,&y);

    if(y==0){
        printf("1");
    }
    else{
        int res=x;
        int i;
        for(i=1;i<y;i++){
            res*=x;
        }
        printf("%d",res);
    }
    return 0;
}
