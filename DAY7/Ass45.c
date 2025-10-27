#include<stdio.h>
int main()
// draw this pattern
// 12321
// 12 21
// 1   1
{
    int i,j,n = 3; // number of rows
    for (int i = 1, j=1; i <= n, j<= n; i++, j++) // outer loop for number of rows
   {
       // print left side numbers
       for (int j = 1; j <= n - i + 1; j++)
       {
           printf("%d", j);
       }
       // print spaces
       for (int j = 1; j < 2 * (i - 1); j++)
       {
           printf(" ");
       }
       // print right side numbers
       // If i == 1 there is no inner gap, so avoid duplicating the middle number.
       // Otherwise include the last left number as the first on the right side.
       int last = n - i + 1;
       int start = (i == 1) ? last - 1 : last;
       for (int j = start; j >= 1; j--)
       {
           if (start < 1) break; // safety for small n
           printf("%d", j);
       }
       printf("\n");
   }
   return 0;
}