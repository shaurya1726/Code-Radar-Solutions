#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=n;j<=i;j--){
            int z=j;
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}