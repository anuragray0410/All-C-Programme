#include<stdio.h>
#include<math.h>
int main() {
    float n1,n2;
    int p1,p2;
    printf("enter a positive float value: ");
    scanf("%f",&n1);
    p1=floor(n1);
    p2=ceil(n1);
    printf("the floor value of %.2f is %d\n",n1,p1);
    printf("the ceil value of %.2f is %d\n",n1,p2
    printf("enter a negative float value: ");
    scanf("%f",&n2);
    p1=floor(n2);
    p2=ceil(n2);
    printf("the floor value of %.2f is %d\n",n2,p1);
    printf("the ceil value of %.2f is %d\n",n2,p2);
    return 0;
}
    

