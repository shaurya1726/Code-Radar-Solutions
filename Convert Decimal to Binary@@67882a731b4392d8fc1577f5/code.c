#include <stdio.h>
int main()  {
    int deciaml,binary=0,base=1;
    scanf("%d",&deciaml);
    while(decimal>0){
        binary += (decimal % 2)*base;
        decial /= 2;
        base *= 10;
        printf("%d"binary);
        return 0;
    }
    return 0;
}