// To find all armstrong numbers in range 1 to n.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, num2, num1, rem, i = 1;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("Armstrong Numbers in range 1 to %d are as follows:\n", n);
    while (i <= n)
    {
        int sum = 0, k = 0;
        num2 = i;
        num1 = i;
        while (num2 != 0)
        {
            num2 = num2 / 10;
            k++;
        }
        while (num1 != 0)
        {
            rem = num1 % 10;
            sum += pow(rem, k);
            num1 = num1 / 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
