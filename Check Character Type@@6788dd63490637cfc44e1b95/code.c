#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("Vowel");
    }
    else if(c>='a'&&c<='z'||c>='A'&&c>='Z'){
        printf("Consonant");
    }
    else if(c>='0'&&c<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}