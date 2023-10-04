//Write the code for to find the number which is smaller  than any two number(20,25)
#include<stdio.h>
void main()
{
  int num;
  printf("Enter the num: ");
  scanf("%d",&num);
  if(num>20 && num<25)
   printf("Number is between 20 and 25");
  else if(num>25)
   printf("Numnber is bigger than 25");
  else if(num<20)
   printf("Number is smaller than 20");
  }
  /*Enter the num: 4
    Number is smaller than 20
    Enter the num: 21
    Number is between 20 and 25
    Enter the num: 77
     Numnber is bigger than 25
  */

