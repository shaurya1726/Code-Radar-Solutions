#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num = arr[i];
        int reversed = 0;
        int temp = num;
    }
    while(temp>0){
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }
    if(num == reversed){
        count++;
    }
    printf("%d",count);
    return 0;
}