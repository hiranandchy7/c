#include <stdio.h>
#include <string.h>

int palindrome(char s[]){
    int i=0, j=strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char s[100];
    gets(s);
    (palindrome(s)) ? printf("Palindrome") : printf("Not Palindrome");
}
