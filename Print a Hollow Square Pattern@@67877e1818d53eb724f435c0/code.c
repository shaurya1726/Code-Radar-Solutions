#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(n%2!=0)    {
            if(i==j){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        else{
            printf("*");
        }
        }
    }
    return 0;
}