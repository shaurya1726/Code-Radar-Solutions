#include<stdio.h>
int main(){
    int n;
    int z=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",z--);
        }
    }
    return 0;
}