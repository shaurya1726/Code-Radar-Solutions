#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n;i++){
        for(int j=5-n;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}