#include<stdio.h>
void selectionSort(int arr[],int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        min =  i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",i);
    }
}