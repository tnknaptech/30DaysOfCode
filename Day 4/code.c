#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("Enter any three numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if ((a > b) && (a > c))
    {
        big = a;
    }
    if ((b > a) && (b > c))
    {
        big = b;
    }
    if ((c > b) && (c > a))
    {
        big = c;
    }
    printf("Largest Numbers is:%d", big);
    return 0;
}
