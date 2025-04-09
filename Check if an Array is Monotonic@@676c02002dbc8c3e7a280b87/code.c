#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Increasing = 1;
    int Decreasing = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            Increasing = 0;
        }
        if(arr[i]<arr[i+1]){
            Decreasing = 0;
        }
    }
    if(Increasing==1||Decreasing==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}