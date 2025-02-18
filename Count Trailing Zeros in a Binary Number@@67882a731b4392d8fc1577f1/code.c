#include<stdio.h>
int main(){
    int num, count = 0;
    scanf("%d",&num);
    while((num &(1<<31))!=0){
        count++;
        num >>= 1;
    }
    printf("%d",count);
    return 0;
}