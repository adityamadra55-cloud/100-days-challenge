/*Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/
#include<stdio.h>
int main(void)
{
    int a, b, sum;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    sum=a+b;
    printf("Value of a= %d \n", a);
    printf("Value of b= %d \n", b);
    printf("Sum=%d\n", sum);
    return 0;
}