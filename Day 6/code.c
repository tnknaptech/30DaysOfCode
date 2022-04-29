// To calculate area and circumference of a circle.
#include <stdio.h>
int main()
{
    float radius, area, circumference;
    printf("Enter Radius:");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 3.14 * 2 * radius;
    printf("Area : %f sq.units \nCircumference : %f units", area, circumference);
    return 0;
}
