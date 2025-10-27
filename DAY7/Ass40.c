#include<stdio.h>
int main()
//using c make this pattern
//123
//456
//789
{
int n,i,j,count= 1;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}