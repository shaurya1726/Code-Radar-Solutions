#include <stdio.h>
int main()  {
    int decimal,binary=0,base=1;
    scanf("%d",&decimal);
    while(decimal>0){
        binary += (decimal % 2)*base;
        decimal /= 2;
        base *= 10;
        printf("%d",binary);
        return 0;
    }
    return 0;
}