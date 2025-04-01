#include<stdio.h>
int secondLargest(int arr[],int n){
    if(n<2){
        printf("%d",-1);
        return -1;
    }
    int first = arr[0],second = -1;
    int allsame = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            allsame=0;
        }
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i] != first){
            second = arr[i];
        }
    }
    if(allsame){
        return -1;
    }
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
    else if(arr[0]=arr[1]){
        printf("%d",-1);
    }
    return 0;
}