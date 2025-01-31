#include<stdio.h>
int main(){
    int x,y;
    int oper;
    scanf("%d %d",&x,&y);
    scanf("%d",&oper);
    switch(oper) {
        case 1:
        printf("%d",x+y);
        break;
        case 2:
        printf("%d",x-y);
        break;
        case 3:
        printf("%d",x*y);
        break;
        case 4:
        if(y%2!=0){
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