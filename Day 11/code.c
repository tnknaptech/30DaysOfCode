// To write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter any two numbers:");
    scanf("%f %f", &a, &b);
    printf("\nBefore Swapping:");
    printf("\na = %f b = %f", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter Swapping:");
    printf("\na = %f b = %f", a, b);

    return 0;
}
