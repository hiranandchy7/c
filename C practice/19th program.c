#include <stdio.h>
int main() {
    int r,c,a[10][10],b[10][10],s[10][10];
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            s[i][j]=a[i][j]+b[i][j];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }
}
