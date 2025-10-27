#include<stdio.h>
int main()
// draw this patterm
//    10
//   9 8
//  7 6 5
// 4 3 2 1
#include<stdio.h>
int main()
{
    int n=10;// initialize n to 10
    for(int i=1;i<=4;i++)// outer loop for number of rows
    {
        for(int j=1;j<=4-i;j++)// inner loop for spaces
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)// inner loop for numbers
        {
            printf("%d ",n);
            n--;
        }
        printf("\n");
    }
    return 0;
}