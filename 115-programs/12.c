//Which is a menu- driven program to compute the area of the various geomatrical shape.

#include <stdio.h>
int main()
{
 int a;
 printf("Enter a number: ");
 scanf("%d", &a);

 switch(a)
 {
    case 1:printf("Area of a triangle= 1/2 * h * b");
           break;
    case 2:printf("Area of a circle= 22/7 * r *r");
           break;
    case 3:printf("Area of a rectangle= w * h");
           break;
    case 4:printf("Area of a square= a * a ");
           break;
    case 5:printf("Area of a parallelogram = b * h");
           break;
    default : printf("Invalid");
 } 
}
/*
Enter a number: 4
Area of a square= a * a  
*/