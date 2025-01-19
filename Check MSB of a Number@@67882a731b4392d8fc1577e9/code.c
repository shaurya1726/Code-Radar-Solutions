#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int result = x | 1;
    if(result == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}