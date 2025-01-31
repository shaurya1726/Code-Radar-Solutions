#include<stdio.h>
int main(){
    int x,y,z;
    char operator;
    scanf("%d %d",&x,&y);
    scanf("%c",&operator);
    switch(operator) {
        case '+':
        z = x+y;
        printf("%d",z);
        break;
        case '-':
        z = x-y;
        printf("%d",z);
        break;
        case '*':
        z=x*y;
        printf("%d",z);
        break;
        case '/':
        if(y%2!=0){
            z=x/y;
            printf("%d",z);
        }
        break;
        else{
            printf("Error");
        }
        break;
        default:
        printf("Error");
    }
    return 0;
}