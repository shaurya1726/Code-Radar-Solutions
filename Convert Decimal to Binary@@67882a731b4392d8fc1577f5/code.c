#include<stdio.h>
int main(){
    int decimal,i;
    scanf("%d",&decimal);
    if(decimal==0){
        printf("0\n");
    }
    for(int i=31;i>=0;i--){
        if((decimal>>i)&1){
            break;
        }
    }
    printf("%d",i);
    for(;i>=0;i--){
        printf("%d",(decimal>>i)&1);
    }
    printf("\n");
    return 0;
}