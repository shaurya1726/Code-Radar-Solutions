#include<stdio.h>
int findFirstPeak(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                return arr[i];
            }
        }
        else if(i==n-1){
             if(arr[i]>arr[i-1]){
                return arr[i];
            }
        }
        else{
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                return arr[i];
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak = findFirstPeak(arr,n);
    printf("%d",peak);
    return 0;
}