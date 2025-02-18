#include<stdio.h>
int main(){
    int num,n;
    scanf("%d%d",&num,&n);
    int mask = 1 << n;
    int newNum = num | mask;
    printf("%d",newNum);
    return 0;
}