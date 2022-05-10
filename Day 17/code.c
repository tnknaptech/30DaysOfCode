// To print factorial of a number using while loop.
#include <stdio.h>
int main()
{
    int a;
    long int fac = 1;
    printf("Enter Number:");
    scanf("%d", &a);
    while (a > 0)
    {
        fac *= a;
        a -= 1;
    }
    printf("Factorial is : %lu", fac);
    return 0;
}
