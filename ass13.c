#include<stdio.h>
int main() {
    int l,w,a,p;
    printf("Enter length of rectangle: ");
    scanf("%d",&l);
    printf("Enter width of rectangle: ");
    scanf("%d",&w);
    a=l*w;
    printf("Area of rectangle is %d\n",a);
    p=2*(l+w);  
    printf("Perimeter of rectangle is %d\n",p);
    return 0;   
}
