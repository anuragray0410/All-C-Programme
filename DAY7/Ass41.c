#include<stdio.h>
int main()
//using c make this pattern
//        *
//       * *
//      * * *
//       * * 
//        *
{
    int n, i, j, space;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    space = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
        space--;
    }
    space = 1;
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= n - i; j++)
            printf("* ");
        printf("\n");
        space++;
    }
    return 0;
} 