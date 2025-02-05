#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}