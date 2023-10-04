//All in one (area of circle,area of rectangle, volume of cuboid)
#include <stdio.h>
#define PI 3.14
float circle(); //circle(void)
int rectangle();
int cuboid();
int main()
{
 int option ;
 while(1)
 {
  printf("\nPress 1. circle\t 2. rectangle\t 3.cuboid\n");
  scanf("%d",&option);
switch(option)
{
 case 1:     
        printf("Area of a circle = %f",circle());
        break;
case 2:	 
        printf("Area of a rectangle: %d",rectangle());
        break;
case 3:
	printf("volume of the cuboid: %d",cuboid());
        break;
default:
        printf("Invalid");      
    }
   }
 }
 
float circle()
 {
  float r,circle;
  printf("Enter the radius: \n");
  scanf("%f",&r);
  circle= PI*r*r;
  return circle;
}
int rectangle()
{
  int l, w,rectangle;
  printf("length of a rectangle:");
  scanf("%d",&l);
  printf("Width of a rectangle:  ");
  scanf("%d",&w);
  rectangle=l*w;
  return rectangle;
}
int cuboid()
{
  int l,w,h,cuboid;
  printf("length of a cuboid:");
  scanf("%d",&l);
  printf("width of a cuboid:");
  scanf("%d",&w);
  printf("height of a cuboid:");
  scanf("%d",&h);
  cuboid=l*w*h;
  return cuboid;
 }
 /*
 Press 1. circle  2. rectangle    3.cuboid
1
Enter the radius: 
2
Area of a circle = 12.560000
Press 1. circle  2. rectangle    3.cuboid
2
length of a rectangle: 9
Width of a rectangle: 3
Area of a rectangle: 27
Press 1. circle  2. rectangle    3.cuboid
3
length of a cuboid:10
width of a cuboid:4
height of a cuboid:3
volume of the cuboid: 120
 */