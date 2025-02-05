#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    for(int i=1;i<=n;i++){
        while(n!=0){
            ld = n%10;
            n=n/10;
            sum=sum+ld;
        }
        printf("%d",sum);

    }
    return 0;
}