#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int i=0;i<n-i-1;i++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
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
    sort(arr,n);
    int smallest = 1;
    for(int i=0;i<n;i++){
        if(arr[i]==smallest){
            smallest++;
        }
    }
    printf("%d",smallest);
    return 0;
}