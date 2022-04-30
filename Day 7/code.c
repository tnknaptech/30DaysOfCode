// To print table of number using for loop
#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d", &a);
    for (int i = 0; i <= 10; i++)
    {
        printf("\n%d * %d = %d", a, i, a * i);
    }
    return 0;
}
