#include<stdio.h>
int main(){
    int decimal;
    scanf("%d",&decimal);
    for(int i=31;i>=0;i--){
        printf("%d",(decimal>>i)&1);
    }
    printf("\n");
    return 0;
}