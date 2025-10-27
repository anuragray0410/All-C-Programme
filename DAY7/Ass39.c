#include<stdio.h>
int main()
//write a c program to print the following pattern 
//4321
//432
//43
//4
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
for(i=n; i>=1; i--)
{
    for(j=1; j<=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
    
}
return 0;
}