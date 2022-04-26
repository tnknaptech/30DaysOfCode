//To Print the table of a number using while loop.
#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("Enter Number:");
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("\n%d * %d = %d", a, i, a * i);
        i++;
    }
    return 0;
}
