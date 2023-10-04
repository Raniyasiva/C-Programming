//Code for the mark system input from the user

#include<stdio.h>
void main()
{
int mark;
printf("Mark is ");
scanf("%d", &mark);

if (mark>=90)
 printf("A grade");

else if(mark>=80 && mark<90)
 printf("B grade");

else if(mark<80 && mark>=70)
 printf("C grade");

else if(mark<70 && mark>=60)
 printf("D grade");

else if(mark<60 && mark>=50)
 printf("Average");

else if(mark<50)
 printf("Fail");
}

/*Mark is 99
 A grade
 Mark is 85
 B grade
 Mark is 77
 C grade
 Mark is 64
 D grade
 Mark is 55
 Average
 Mark is 45
 Fail
 */