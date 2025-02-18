#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=65;i<=n;i++){
        for(int j=65;j<=i;j++){
            char ch = (char)j;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}