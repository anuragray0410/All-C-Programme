#include<stdio.h>
int main()
//using c program show that the entered three numbers are mixed or equal also the numbers can be positive or negative also show the greatest
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==b && b==c)
    {
        printf("The numbers are equal.\n");
    }
    else
    {
        printf("The numbers are mixed.\n");
        if(a>0)
            printf("%.2f is positive.\n", a);
        else
            printf("%.2f is negative.\n", a);
        if(b>0)
            printf("%.2f is positive.\n", b);
        else
            printf("%.2f is negative.\n", b);
        if(c>0)
            printf("%.2f is positive.\n", c);
        else
            printf("%.2f is negative.\n", c);

        if(a>=b && a>=c)
            printf("%.2f is the greatest number.\n", a);
        else if(b>=a && b>=c)
            printf("%.2f is the greatest number.\n", b);
        else
            printf("%.2f is the greatest number.\n", c);
    }
    return 0;
}