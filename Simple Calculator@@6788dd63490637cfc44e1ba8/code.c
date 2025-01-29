#include<stdio.h>
int main(){
    int x,y,z;
    char operator;
    scanf("%d %d %d",&x,&y,&z);
    switch(operator) {
        case '+':
        z = x+y;
        printf("%d",z);
        case '-':
        z = x-y;
        printf("%d",z);
        case '*':
        z=x*y;
        printf("%d",z);
        case '/':
        if(y%2!=0){
            z=x/y;
            printf("%d",z);
        }
        else{
            printf("Error");
        }
    }
    return 0;
}