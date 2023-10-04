//Area of a circle
#include <stdio.h>
#define PI 3.14
float area(float r);
int main()
{
  float r;
  printf("Enter the radius of a circle:   ");
  scanf("%f",&r);
  printf("Area of a circle = %f",area(r));
}
float area(float r)
{
  float result;
  result= PI*r*r;
  return result;
}
/*
Enter the radius of a circle: 4
Area of a circle = 50.240002*/