#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int result = (y & 1) || (y | 1) || (y ^ 1);
    if(y==0){
        printf("%d",result);
    }
    else{
        printf("0");
    }
    return 0;
}