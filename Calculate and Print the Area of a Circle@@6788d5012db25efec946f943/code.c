#include<stdio.h>
int main(){
    float rad,pi;
    pi = 3.14;
    scanf("%f",&rad);
    float area = pi * rad * rad;
    printf("Area: %.2f\n",area);
    return 0;
}