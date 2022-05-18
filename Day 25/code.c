// To find whether an entered number is an Armstrong number or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, num2, copy_num, sum = 0, k = 0, rem;
    printf("Enter any number : ");
    scanf("%d", &num);
    num2 = num;
    copy_num = num;
    while (num2 != 0)
    {
        num2 = num2 / 10;
        k++;
    }
    while (num != 0)
    {
        rem = num % 10;
        sum += pow(rem, k);
        num = num / 10;
    }
    if (copy_num == sum)
    {
        printf("It is an Armstrong Number!");
    }
    else
    {
        printf("It is not an Armstrong Number!");
    }
    return 0;
}
