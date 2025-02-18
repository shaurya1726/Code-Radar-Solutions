#include<stdio.h>
int main(){
    int num,bit=0;
    scanf("%d",&num);
    while((num & 1)==0){
        num >>= 1;
        bit++;
    }
    printf("%d",bit);
    return 0;
}