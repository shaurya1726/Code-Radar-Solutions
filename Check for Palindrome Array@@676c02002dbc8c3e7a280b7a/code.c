#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Palindrome = 1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            Palindrome = 0;
            break;
        }
    }
    if(Palindrome == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}