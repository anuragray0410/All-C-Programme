#include<stdio.h>
int main()
//check if the person is eligible for vote or not using switch case
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch(age>=18)
    {
        case 1:
        printf("You are eligible for vote.\n");
        break;
        default:
        printf("You are not eligible for vote.\n");
        break;
    }
    return 0;
}
