#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int result = (y & 1) || (y | 1) || (y ~ 1);
    if(result==1){
        printf("%d",result);
    }
    else{
        printf("%d",result);
    }
    return 0;
}