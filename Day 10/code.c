// Write a Program to input base salary from users and calculate the gross salary.
#include <stdio.h>
int main()
{
    float salary, gross_salary = 0, Dearness_allowance, House_rate_allowance;
    printf("Enter Base Salary:");
    scanf("%f", &salary);
    Dearness_allowance = 0.4 * salary;
    House_rate_allowance = 0.2 * salary;
    gross_salary = salary + Dearness_allowance + House_rate_allowance;
    printf("***********************************");
    printf("\nSalary : %f\nDearness Allowance : %f\nHouse Rate Allowance : %f\nGross Salary : %f", salary, Dearness_allowance, House_rate_allowance, gross_salary);
    printf("\n***********************************");
    return 0;
}
