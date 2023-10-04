//Find the biggest number in 4 variables

#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("The value of a is ");
    scanf("%d",&a);
    printf("The value of b is ");
    scanf("%d",&b);
    printf("The value of c is ");
    scanf("%d",&c);
    printf("The value of d is ");
    scanf("%d",&d);
{
if(a>b)
  {
    if(a>c)
     {
      if(a>d)
        
          printf("a is the biggest");
        else
            printf("d is the biggest");
     }
     else if(c>d)
      printf("C is the biggest");
  
  else
  printf("D is the biggest");

  }
  else if(b>c)
     {
       if(b>d)
      printf("B is the biggest");
       else
      printf("D is the biggest");
      }
else if(c>d)
 printf("C is the biggest");
else
 printf("D is the biggest");
}
}
/*
The value of a is 20
The value of b is 67
The value of c is 44
The value of d is 1
B is the biggest
*/

  