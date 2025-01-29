#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%2==0){
        printf("Prime");
    }
    else if(x%3==0){
        printf("Not Prime");
    }
    else if(x%2==0 || x%3==0){
        printf("Not Prime");
    }
    else{
        if(x%5==0){
            printf("Not Prime");
        }
        else{
            if(x%7==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    return 0;
}