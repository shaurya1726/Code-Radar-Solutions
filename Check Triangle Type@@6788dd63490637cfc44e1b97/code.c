#include<stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3){
        printf("Equilateral");
    }
    else if(s1!=s2 && s2!=s3){
        printf("Scalene");
    }
    else{
        printf("Isosceles");
    }
    return 0;
}