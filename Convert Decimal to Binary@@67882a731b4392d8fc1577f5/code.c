#include <stdio.h>
int main()  {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    return 0;
    if(n>1){
        main(n/2);
    }
    printf("%d"n%2);
    return 0;
}