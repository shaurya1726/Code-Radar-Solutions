#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i=2;i<=x-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(x==2){
        printf("Prime");
    }
    else if(a==0){
        printf("Not Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}