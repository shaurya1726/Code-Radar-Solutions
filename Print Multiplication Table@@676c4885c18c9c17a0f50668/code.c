#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=n;i<=n*10;i=i+n){
        sum = n + n;
        printf("%d X %d = %d\n",n,i,sum);
    }
    return 0;
}