// To perform arithmetic operations using switch statement.
#include <stdio.h>
int main()
{
    int a, b, k;
    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b);
    printf("Enter the task:\n1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("%d / %d = %d", a, b, a / b);
        }
        else
        {
            printf("You cannot divide any number by 0!");
        }
        break;
    default:
        printf("Invalid Choice!");
        break;
    }
    return 0;
}
