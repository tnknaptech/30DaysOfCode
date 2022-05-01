// To print table of number using do while loop
#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d", &a);
    int i = 1;
    do
    {
        printf("\n%d * %d = %d", a, i, a * i);
        i++;
    } while (i <= 10);
    return 0;
}
