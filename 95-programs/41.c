//Area of a rectangle

#include <stdio.h>
int rectangle(int l,int w);
void main()
{
 int l, w,A;
 printf("length of a rectangle: ");
 scanf("%d",&l);
 printf("Width of a rectangle: ");
 scanf("%d",&w);

 A = rectangle(l,w);
 printf("Area of a rectangle: %d",A);
}
int rectangle(int l,int w)
{
 int result;
 result=l*w;
 return result;
}
/*
length of a rectangle:10
Width of a rectangle: 5
Area of a rectangle: 50
*/