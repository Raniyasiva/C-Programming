#include <stdio.h>
int cuboid(int l,int w,int h);
void main()
{
 int l,w,h,volume;
 printf("length of a cuboid:");
 scanf("%d",&l);
 printf("width of a cuboid:");
 scanf("%d",&w);
 printf("height of a cuboid:");
 scanf("%d",&h);
 volume= cuboid(l,w,h);

 printf("Volume of a cuboid is %d\n",volume);
 }
 int cuboid(l,w,h)
 {
  int result;
  result=l*w*h;
  return result;
 }

 /*
length of a cuboid:10
width of a cuboid:5
height of a cuboid:4
Volume of a cuboid is 200
 */
