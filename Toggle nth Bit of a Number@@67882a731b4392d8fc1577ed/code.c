#include<stdio.h>
int main(){
    int num,n,bit;
    scanf("%d%d",&num&n);
    bit = num ^(1 << n);
    printf("%d",bit);
    return 0;
}