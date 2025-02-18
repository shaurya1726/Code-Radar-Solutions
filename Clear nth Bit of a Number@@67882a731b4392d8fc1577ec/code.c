#include<stdio.h>
int main(){
    int num,n,bit;
    scanf("%d%d",&num,&n);
    bit = num ~(1 << num);
    printf("%d",bit);
    return 0;
}