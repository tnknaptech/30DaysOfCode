// To Print Fibonacci Series using while loop.
#include <stdio.h>
int main()
{
    long long int a = 0, b = 1, c;
    int k;
    printf("Enter the number of terms upto which you want to print Fibonacci Series(max.150) :");
    scanf("%d", &k);
    printf("\n%llu\n%llu", a, b);
    while (k > 0)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\n%llu ", c);
        k--;
    }
    return 0;
}
