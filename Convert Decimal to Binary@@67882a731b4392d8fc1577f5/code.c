#include <stdio.h>

void binary(int n){
    if(n>1){
        binary(n/2);
    }
}
int main()  {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
    }
    else{
        printf(binary(num));
    }
    printf("\n");
    return 0;
}