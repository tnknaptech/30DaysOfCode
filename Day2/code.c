#include<stdio.h> 
int main()
{
  float a,b;
  printf("Enter any two numbers:"); 
  scanf("%f %f",&a,&b); 
  printf("\nBefore Swapping:"); 
  printf("\na = %f b = %f",a,b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("\nAfter Swapping:"); 
  printf("\na = %f b = %f",a,b); 
  return 0;
}
