#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_Product = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int product = arr[i] * arr[j];
            if(max_Product==0){
                printf("0");
            }
            if(product>max_Product && product>0){
            max_Product = product;
            }
        }
        
    }
    printf("%d",max_Product);
    return 0;
}