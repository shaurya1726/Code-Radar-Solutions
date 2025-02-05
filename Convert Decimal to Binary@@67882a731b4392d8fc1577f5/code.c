#include <stdio.h>

void binary(int num){
    if(num>1){
        binary(num/2);
    }
    printf("%d",num/2);
}
int main()  {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    else{
        binary(num);
    }
    printf("\n");
    return 0;
}