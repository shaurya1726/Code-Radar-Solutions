#include<stdio.h>
int n;
scanf("%d",&n);
int arr[n];
for(int i=0i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
        }
    }
}