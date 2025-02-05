#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int product = 0;
    for(int i=n;i<=n*10;i=i+n){
        product = product + 1;
        printf("%d X %d = %d\n",n,product,i);
    }
    return 0;
}