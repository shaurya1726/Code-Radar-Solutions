#include<stdio.h>
int main(){
    int x,y;
    char oper;
    if(scanf("%d%d%c",&x,&y,&oper) !=3);
    printf("error");
    return 1;
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
            printf("%d",x/y);
        break;
        default:
        printf("error");
    }
    return 0;
}