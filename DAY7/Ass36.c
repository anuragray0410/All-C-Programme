#include <stdio.h>
int main()
//to find the sum of digits of the number using while loop
{
    int n, sum= 0, r;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
   while(n!=0)
   {
    r=n%10;
    sum=sum+r;
    n=n/10;
   }
   printf("THE SUM OF DIGITS IS: %d", sum);
   return 0;
}