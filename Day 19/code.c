// To print factorial of a number using recursion.
#include <stdio.h>
long long int factorial(long long int num)
{
    if (num <= 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    long long int a;
    printf("Enter Number : ");
    scanf("%llu", &a);
    printf("Factorial is : %llu", factorial(a));
    return 0;
}
