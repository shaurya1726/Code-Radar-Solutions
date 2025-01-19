#include<stdio.h>
#include<limits.h>
int main(){
    int x;
    scanf("%d",&x);
    int result = x >> (sizeof(int) * CHAR_BIT - 1);
    if(result == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}