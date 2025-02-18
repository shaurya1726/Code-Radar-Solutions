#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d = 65;
    for(int i=d;i<=n;i++){
        for(int j=d;j<=i;j++){
            char ch = (char)d;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}