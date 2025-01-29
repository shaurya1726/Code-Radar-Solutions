#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int z = x ** 0.5;
    if(x*x==y){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}