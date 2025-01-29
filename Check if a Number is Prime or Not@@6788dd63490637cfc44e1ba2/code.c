#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>2 && x%2!=0 && x%x==0){
        printf("Prime");
    }
    else if(x==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}