#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x==2){
        printf("Prime");
    }
    else{
        int isPrime = 1;
        for(int i=2;i<=x/2;i++){
            if(x%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}