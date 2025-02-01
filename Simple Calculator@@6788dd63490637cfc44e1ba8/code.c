#include<stdio.h>
int main(){
    int x,y,z;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(z=='+'){
        z=x+y;
        printf("%d",z);
    }
    else if(z=='-'){
        z=x-y;
        printf("%d",z);
    }
    else if(z=='*'){
        z=x*y;
        printf("%d",z);
    }
    else if(z=='/'){
        if(y!=0){
        z=x/y;
        printf("%d",z);
        }
        else {
            printf("error");
        }
    }
    return 0;
}