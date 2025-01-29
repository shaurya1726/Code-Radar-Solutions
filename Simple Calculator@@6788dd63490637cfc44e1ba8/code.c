#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int sum,diff,product,division;
    sum = x+y;
    diff = x-y;
    product = x*y;
    division = x/y;
    if(z==+){
        printf("%d",sum);
    }
    else if(z==-){
        printf("%d",diff);
    }
    else if(z==*){
        printf("%d",product);
    }
    else if(z==/){
        printf("%d",division);
    }
    else{
        printf("Error");
    }
    return 0;
}