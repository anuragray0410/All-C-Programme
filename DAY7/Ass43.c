#include<stdio.h>
int main()
// using c program check the entered three numbers are buzz number or not also show which is even or odd and also enter it is positive or negative
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a % 7 == 0 || a % 10 == 7)
        printf("%d is a Buzz number\n", a);
    else
        printf("%d is not a Buzz number\n", a);
    if (b % 7 == 0 || b % 10 == 7)
        printf("%d is a Buzz number\n", b);
    else
        printf("%d is not a Buzz number\n", b);
    if (c % 7 == 0 || c % 10 == 7)
        printf("%d is a Buzz number\n", c);
    else
        printf("%d is not a Buzz number\n", c);
    if (a % 2 == 0)
        printf("%d is even\n", a);
    else
        printf("%d is odd\n", a);
    if (b % 2 == 0)
        printf("%d is even\n", b);
    else
        printf("%d is odd\n", b);
    if (c % 2 == 0)
        printf("%d is even\n", c);
    else
        printf("%d is odd\n", c);
    if (a > 0)
        printf("%d is positive\n", a);
    else
        printf("%d is negative\n", a);
    if (b > 0)
        printf("%d is positive\n", b);
    else
        printf("%d is negative\n", b);
    if (c > 0)
        printf("%d is positive\n", c);
    else
        printf("%d is negative\n", c);
    return 0;
}