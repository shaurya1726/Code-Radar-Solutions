#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int flip = ~n;
    printf("%d",flip);
    return 0;
}