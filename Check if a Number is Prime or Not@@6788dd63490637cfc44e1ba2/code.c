#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int isPrime;
    for(int i=2;i*i<=x;i++){
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
    return 0;
}