#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int Major = -1;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    if(count>n/2){
        Major = arr[i];
        break;
    }
    if(Major!=-1){
        printf("%d ",Major);
    }
    else{
        printf("%d ",Major);
    }
    return 0;
}