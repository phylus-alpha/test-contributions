#include<stdio.h>
int main()
{
    int a[4][2];
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("Enter the co-ordinates of set %d",i+1);
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    printf("%d %d",a[1][0],a[1][1]);
}