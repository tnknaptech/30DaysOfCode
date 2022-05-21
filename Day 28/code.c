// To convert a binary number into its decimal equivalent.
#include <stdio.h>
#include <math.h>
int main()
{
    int binary_num, num = 0, n = 0, rem;
    printf("Enter any binary number:");
    scanf("%d", &binary_num);
    while (binary_num != 0)
    {
        rem = binary_num % 10;
        num = num + rem * pow(2, n);
        binary_num /= 10;
        n++;
    }
    printf("Decimal Equivalent number:%d", num);
    return 0;
}
