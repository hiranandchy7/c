#include <stdio.h>
#include <string.h>

void del(char s[], int pos, int n){
    char result[200];
    strncpy(result, s, pos);
    result[pos] = '\0';
    strcat(result, s + pos + n);
    printf("%s", result);
}

int main(){
    char s[100];
    int pos, n;
    gets(s);
    scanf("%d%d",&pos,&n);
    del(s,pos,n);
}
