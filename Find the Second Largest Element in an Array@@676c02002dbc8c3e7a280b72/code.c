#include<stdio.h>
int secondLargest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int first = arr[0],second = -1;
    for(int i=1;i<n;i++){
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int second = secondLargest(arr,n);
    if(second != -1){
        printf("%d\n",second);
    }
    return 0;
}