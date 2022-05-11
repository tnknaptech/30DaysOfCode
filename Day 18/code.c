// To print factorial of a number using for loop.
#include <stdio.h>
int main()
{
    long long int a, fac = 1;
    printf("Enter Number:");
    scanf("%llu", &a);
    for (int i = a; i > 0; i--)
    {
        fac *= i;
    }
    printf("Factorial is : %llu", fac);
    return 0;
}
