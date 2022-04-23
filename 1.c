#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, sum, percentage;
    printf("Enter marks of five subjects(out of 100):\n");
    printf("Subject 1:");
    scanf("%f", &s1);
    printf("Subject 2:");
    scanf("%f", &s2);
    printf("Subject 3:");
    scanf("%f", &s3);
    printf("Subject 4:");
    scanf("%f", &s4);
    printf("Subject 5:");
    scanf("%f", &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    percentage = sum / 5;
    printf("\n****************************\nTotal Marks : %f/500\nPercentage : %f\n****************************", sum, percentage);
    return 0;
}
