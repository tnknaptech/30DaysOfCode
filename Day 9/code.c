// Write a Program to convert temperature from degree centigrade to fahrenheit.
#include <stdio.h>
int main()
{
    float temp_in_fahrenheit, temp_in_celcius;
    printf("Enter the temperature (in Celcius):");
    scanf("%f", &temp_in_celcius);
    temp_in_fahrenheit = 1.8 * temp_in_celcius + 32;
    printf("Temperature in Fahrenheit is: %f", temp_in_fahrenheit);
    return 0;
}
