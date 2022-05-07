// To Print Fibonacci Series using for loop.
#include <stdio.h>
int main()
{
    long long int a = 0, b = 1, c;
    int k;
    printf("Enter the number of terms upto which you want to print Fibonacci Series(max.150) :");
    scanf("%d", &k);
    printf("Fibonacci Series : ");
    printf("\n%llu\n%llu", a, b);
    for (int i = 0; i < k; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\n%llu ", c);
    }
    return 0;
}
