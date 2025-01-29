#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int sq_root;
    sq_root = x ** 0.5;
    if(sq_root==y){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}