// To Find whether an entered number is prime or not using do while loop.
#include <stdio.h>
int main()
{
    int num, c = 1, i = 2;
    printf("Enter any Number :");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
        {
            printf("%d isn't prime number!", num);
            c = 0;
            break;
        }
        i++;
    } while (i < num);
    if (c)
    {
        printf("%d is prime number!", num);
    }
    return 0;
}
