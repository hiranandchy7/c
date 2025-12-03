#include <stdio.h>
#include <string.h>

void insert(char s[], char sub[], int pos) {
    char result[200];
    strncpy(result, s, pos);
    result[pos] = '\0';
    strcat(result, sub);
    strcat(result, s + pos);
    printf("%s", result);
}

int main() {
    char s[100], sub[50];
    int pos;
    gets(s);
    gets(sub);
    scanf("%d",&pos);
    insert(s, sub, pos);
}
