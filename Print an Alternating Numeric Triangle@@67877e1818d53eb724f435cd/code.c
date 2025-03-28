#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    bool a=true;
    if(i%2!=0) a=true;
    else a=false;
        for(int j=0;j<=i-1;j++){
            printf("%d ",a);
            a=!a;
        }
        printf("\n");
    }
    return 0;
}