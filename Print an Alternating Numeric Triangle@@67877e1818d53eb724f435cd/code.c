#include<stdio.h>
int main(){
    int n;
    bool a=true;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            a=!a;
        }
        printf("\n")
    }
    return 0;
}