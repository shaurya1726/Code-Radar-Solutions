#include<stdio.h>
int main(){
    int num, count = 0;
    scanf("%d",&num);
    for(int i=31;i>=0;i--){
        (num >> i) & 1;
    }
    while(num % 2 == 0 && num != 0){
        count++;
        num /= 2;
    }
    printf("%d",count);
    return 0;
}