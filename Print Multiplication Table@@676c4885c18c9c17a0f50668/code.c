#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*10;i=i+n){
        printf("%d * %d = %d",n,i,i);
    }
    return 0;
}