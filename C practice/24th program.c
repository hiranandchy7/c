#include <stdio.h>
#include <string.h>

int main(){
    char s[100], t[50];
    gets(s);
    gets(t);
    char *p = strstr(s, t);
    if(p) printf("%d", p - s);
    else  printf("-1");
}
