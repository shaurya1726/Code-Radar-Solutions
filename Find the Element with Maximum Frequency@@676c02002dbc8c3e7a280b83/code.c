#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxElem = 0;
    int sameFreq = 1;
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(maxElem!=0 && count != maxElem){
                sameFreq = 0;
            }
        }
        if(sameFreq){
            printf("1");
        }
        if(count==maxElem){
            maxElem = 1;
        }
        if(count>maxElem){
            maxElem = arr[i];
        }
    }
    printf("%d",maxElem);
    return 0;
}