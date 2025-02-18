#include<stdio.h>
int main(){
    int num,n;
    scanf("%d%d",&num,&n);
    int Getnthbit = (num >> n)&1;
    int bit = Getnthbit(num,n);
    printf("%d",bit);
    return 0;
}