#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    scanf("%c",&str);
    *fgets(str);
    int len = strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}