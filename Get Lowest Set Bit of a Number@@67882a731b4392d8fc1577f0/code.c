#include<stdio.h>
int main(){
    int num,bit;
    scanf("%d",&num);
    bit = num & -num;
    printf("%d",bit);
    return 0;
}