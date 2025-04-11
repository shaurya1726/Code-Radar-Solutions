#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rSum[n];
    rSum[0] = arr[0];
    for(int i=1;i<n;i++){
        rSum[i] = rSum[i-1] + arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",rSum[i]);
    }
    return 0;
}