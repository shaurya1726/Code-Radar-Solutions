#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(isupper(c)){
        printf("Uppercase");
    }
    if(islower(c)){
        printf("Lowercase");
    }
    return 0;
}