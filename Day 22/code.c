// To Find whether an entered number is prime or not using for loop.
#include <stdio.h>
int main()
{
    int num, c = 1;
    printf("Enter any Number : ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d isn't prime number!", num);
            c = 0;
            break;
        }
    }
    if (c)
    {
        printf("%d is prime number!", num);
    }
    return 0;
}
