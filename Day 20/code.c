// To Find the largest number among three numbers using nested if else statements.
#include <stdio.h>
int main()
{
    int n1, n2, n3, big;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2)
    {
        if (n1 >= n3)
            big = n1;
        else
            big = n3;
    }
    else
    {
        if (n2 >= n3)
            big = n2;
        else
            big = n3;
    }
    printf("Largest Number is : % d", big);
    return 0;
}
