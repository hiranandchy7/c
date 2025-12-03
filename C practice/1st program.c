#include <stdio.h>
int main() {
    int a,b,c; 
    float avg;
    scanf("%d%d%d", &a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("Sum = %d\nAverage = %.2f", a+b+c, avg);
}
