#include<stdio.h>
int main()
//check the number is palindrome or not
{
    int num, reverse = 0, remainder, original;
    printf("enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        remainder = num%10;
        reverse = reverse *10 + remainder;
        num = num/10;
    }
    if (original == reverse)
    {printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}    