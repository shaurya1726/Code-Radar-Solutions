#include<stdio.h>
int main(){
    int x,y;
    char oper;
    scanf("%d %d",&x,&y);
    scanf("%c",&oper);
    switch(oper) {
        case '+':
        printf("%d",x+y);
        break;
        case '-':
        printf("%d",x-y);
        break;
        case '*':
        printf("%d",x*y);
        break;
        case '/':
        if(y%2==0){
            printf("%d",x/y);
        }
        else{
            printf("Error");
        }
        break;
        default:
        printf("Error");
    }
    return 0;
}