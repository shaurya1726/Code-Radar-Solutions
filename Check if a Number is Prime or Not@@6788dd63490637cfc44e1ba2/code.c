#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>1){
        if(x==2){
            printf("Prime");
        }
        else if(x%2!=0){
            printf("Not Prime");
        }
    }
    else if(x%x==0 && x%1==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}