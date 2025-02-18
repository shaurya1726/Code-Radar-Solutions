#include<stdio.h>
int main(){
    int n,original,reversed=0,remainder;
    scanf("%d",&n);
    original = n;
    for(;n!=0;n/=10){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
    }
    if (original = reversed){
        printf("%d",original);
    }
    return 0;
}