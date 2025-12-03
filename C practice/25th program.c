#include <stdio.h>

int main() {
    char c;
    int lines=0, words=0, chars=0;
    while((c=getchar())!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(c==' ' || c=='\n' || c=='\t') words++;
    }
    printf("Lines=%d Words=%d Characters=%d", lines, words, chars);
}
