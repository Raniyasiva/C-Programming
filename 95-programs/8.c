//Pick completely divisible number by 3 and 5 in between 0 to 100


#include<stdio.h>
void main()
{
 int i;
 for(i=0;i<100;i++)
 
 if(i%3==0 && i%5==0)
 printf("%d ",i);
 }
 //0 15 30 45 60 75 90 