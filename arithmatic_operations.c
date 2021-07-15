/*Write a program to accept two numbers and find their
a) sum  b) diffrence c) product
Check with int, long, signed, unsigned data types. */
#include <stdio.h>
int main()
{
    int num1, num2, sum, diff, prod;
    printf("Enter two numbers: \n");
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    printf("sum = %d\ndiff = %d\nprod = %d", sum, diff, prod);
    return 0;
}