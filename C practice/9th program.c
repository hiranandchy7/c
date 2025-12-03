#include <stdio.h>
int fact(int x){
    int f=1; 
    for(int i=1;i<=x;i++) f*=i;
    return f;
}
int main() {
    int n,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp){
        sum += fact(temp%10);
        temp/=10;
    }
    (sum==n)? printf("Strong"): printf("Not Strong");
}
