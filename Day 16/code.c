// To print Fibonacci Series using do while loop
#include <stdio.h>
int main()
{
    long long int a = 0, b = 1, c;
    int k;
    printf("Enter the number of terms upto which you want to print Fibonacci Series(max.150) :");
    scanf("%d", &k);
    printf("\n%llu\n%llu", a, b);
    do
    {
        c = a + b;
        a = b;
        b = c;
        printf("\n%llu ", c);
        k--;
    } while (k - 1 > 0);
    return 0;
}
