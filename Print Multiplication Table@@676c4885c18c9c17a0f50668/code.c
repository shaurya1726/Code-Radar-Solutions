#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d X %d = %d\n",n,i,i);
    }
    return 0;
}