#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j<i;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=i-1;j++){
            int z=j;
            printf("%d",z--);
        }
        printf("\n");
    }
    return 0;
}