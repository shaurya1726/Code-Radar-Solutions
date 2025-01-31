#include<stdio.h>
int main(){
    int x,y;
    char oper;
    scanf("%d%d%c",&x,&y,&oper);
    scanf("%*c");
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