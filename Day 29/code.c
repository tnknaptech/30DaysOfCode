// To shift input data by two bits to the left & right.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any number : ");
    scanf("%d", &a);
    b = a << 2;
    c = a >> 2;
    printf("\nAfter shifting to the left by two bits : %d", b);
    printf("\nAfter shifting to the right by two bits : %d", c);
    return 0;
}
