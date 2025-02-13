#include<stdio.h>
int toggle(int num,int n){
    return num ^ (1<<n);
}
int main(){
    int n;
    scanf("%d",&n);
    int num;
    scanf("%d",&num);
    int toggled = toggle(num,n);
    printf("%d",toggled);
    return 0;
}