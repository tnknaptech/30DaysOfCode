// To Find whether the entered year is a leap year or not.
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year:");
    scanf("%d", &yr);
    if ((yr % 400 == 0) || ((yr % 100 != 0) && (yr % 4 == 0)))
    {
        printf("It is Leap Year!");
    }
    else
    {
        printf("It isn't Leap Year!");
    }
    return 0;
}
