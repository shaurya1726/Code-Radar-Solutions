#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count = 0;
    while ((num & (1 << 31))== 0){
        count++;
        num <<= 1;
    }
    printf("%d",count);
    return 0;
}