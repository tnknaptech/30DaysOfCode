// To convert decimal number into its binary equivalent.
#include <stdio.h>
int main()
{
    int num1, num2 = 0, binary_num = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        num2 = num2 * 10 + num1 % 2;
        num1 = num1 / 2;
    }
    while (num2 != 0)
    {
        rem = num2 % 10;
        binary_num = binary_num * 10 + rem;
        num2 /= 10;
    }
    printf("%d", binary_num);
    return 0;
}
