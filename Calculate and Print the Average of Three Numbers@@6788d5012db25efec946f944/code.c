#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float average = (float) (x+y+z)/3;
    scanf("%.2f",&average);
    printf("Average: %.2f",average);
    return 0;
}