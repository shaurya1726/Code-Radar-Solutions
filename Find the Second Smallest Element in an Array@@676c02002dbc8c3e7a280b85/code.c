#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first = 0;
    int second = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>first && arr[i]<second){
            second = arr[i];
        }
    }
    if(second == 0){
        printf("-1");
    }
    else{
        printf("%d",second);
    }
    return 0;
}