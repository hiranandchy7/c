#include <stdio.h>

int main() {
    char s[100], *p=s;
    gets(s);
    int len=0;
    while(*p!='\0'){ len++; p++; }
    printf("Length = %d", len);
}
